#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 100
int queue[MAX_SIZE];
int front = -1;
int rear = -1;
bool isFull() {
    return (rear == MAX_SIZE - 1);
}
bool isEmpty() {
    return (front == -1 || front > rear);
}
void enqueue(int data) {
    if (isFull()) {
        printf("Queue is full. Cannot enqueue %d\n", data);
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = data;
        printf("Enqueued: %d\n", data);
    }
}
void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty. Cannot dequeue.\n");
    } else {
        printf("Dequeued: %d\n", queue[front]);
        front++;
    }
}
void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}
int main() {
    int choice, data;

    do {
        printf("\nQueue Operations\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to enqueue: ");
                scanf("%d", &data);
                enqueue(data);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
                break;
        }
    } while (choice != 4);
    return 0;
}
