#include <stdio.h>
void display(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int insert(int arr[], int size, int pos, int element) {
    if (pos < 0 || pos > size) {
        printf("Invalid position to insert element!\n");
        return size;
    }
    for (int i = size - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos] = element;
    return size + 1;
}
int deleteElement(int arr[], int size, int pos) {
    if (pos < 0 || pos >= size) {
        printf("Invalid position to delete element!\n");
        return size;
    }
    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    return size - 1;
}
int main() {
    int arr[100]; // Assuming a maximum array size of 100
    int size = 0; // Current size of the array
    int choice, element, position;

    while (1) {
        printf("\nArray Operations:\n");
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Display array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                printf("Enter the position to insert: ");
                scanf("%d", &position);
                size = insert(arr, size, position, element);
                break;
            case 2:
                printf("Enter the position to delete: ");
                scanf("%d", &position);
                size = deleteElement(arr, size, position);
                break;
            case 3:
                display(arr, size);
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice, please try again.\n");
                break;
        }
    }
    return 0;
}
