#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int data) {
    if (top >= MAX_SIZE - 1) {
        printf("Stack Overflow. Cannot push element %d.\n", data);
    } else {
        stack[++top] = data;
        printf("%d pushed onto the stack.\n", data);
    }
}

void pop() {
    if (top < 0) {
        printf("Stack Underflow. Cannot pop element from an empty stack.\n");
    } else {
        int poppedElement = stack[top--];
        printf("%d popped from the stack.\n", poppedElement);
    }
}

void display() {
    if (top < 0) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, data;

    do {
        printf("\nStack Operations\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to push: ");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
