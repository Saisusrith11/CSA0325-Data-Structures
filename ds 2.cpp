#include <stdio.h>

int findElementLocation(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1; // Element not found
}

int main() {
    int arr[] = {10, 25, 8, 12, 45, 30, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int elementToFind = 30;
    int location = findElementLocation(arr, size, elementToFind);

    if (location != -1) {
        printf("Element %d is found at location %d\n", elementToFind, location);
    } else {
        printf("Element %d not found in the array.\n", elementToFind);
    }

    return 0;
}
