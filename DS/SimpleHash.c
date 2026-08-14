// How To hash an array(user input data) in C
// Using Simple Additive Hashing Technique
#include <stdio.h>
#include <stdlib.h>
#define TABLE_SIZE 10
int hashTable[TABLE_SIZE];
void initializeTable() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        hashTable[i] = -1; // -1 indicates empty slot
    }
}  
int simpleAdditiveHash(int key) {
    int sum = 0;
    while (key != 0) {
        sum += key % 10; // Add last digit
        key /= 10;       // Remove last digit
    }
    return sum % TABLE_SIZE;
}
void insert(int key) {
    int index = simpleAdditiveHash(key);
    int originalIndex = index;
    while (hashTable[index] != -1) {
        index = (index + 1) % TABLE_SIZE; // Linear probing
        if (index == originalIndex) {
            printf("Hash table is full, cannot insert %d\n", key);
            return;
        }
    }
    hashTable[index] = key;
}
void displayTable() {
    printf("Hash Table:\n");
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (hashTable[i] != -1) {
            printf("Index %d: %d\n", i, hashTable[i]);
        } else {
            printf("Index %d: Empty\n", i);
        }
    }
}
int main() {
    initializeTable();
    int keys[] = {123, 456, 789, 101, 112, 131, 415, 161};
    int n = sizeof(keys) / sizeof(keys[0]);
    for (int i = 0; i < n; i++) {
        insert(keys[i]);
    }
    displayTable();
    return 0;
}
