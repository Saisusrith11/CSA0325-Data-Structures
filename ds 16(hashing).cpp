#include <stdio.h>
#define SIZE 10 
int hash(int key) {
    return key % SIZE;
}
void insert(int hashTable[], int key) {
    int index = hash(key);
    int i = 0;
    while (hashTable[(index + i) % SIZE] != -1) {
        i++;
    }
    hashTable[(index + i) % SIZE] = key;
}
void display(int hashTable[]) {
    printf("Hash Table: ");
    for (int i = 0; i < SIZE; i++) {
        if (hashTable[i] != -1) {
            printf("%d ", hashTable[i]);
        } else {
            printf(" - ");
        }
    }
    printf("\n");
}
int main() {
    int hashTable[SIZE];
    for (int i = 0; i < SIZE; i++) {
        hashTable[i] = -1; // Initialize hash table with -1 to indicate empty slots
    }
    // Insert some elements into the hash table
    insert(hashTable, 10);
    insert(hashTable, 20);
    insert(hashTable, 30);
    insert(hashTable, 42);
    insert(hashTable, 18);

    // Display the hash table
    display(hashTable);

    return 0;
}
