// Size of Hash Table 20
// put them in hash table using folding method
//if collison occcers then use linear probing
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TABLE_SIZE 20
int hashTable[TABLE_SIZE];
void initializeTable() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        hashTable[i] = -1; // -1 indicates empty slot
    }
}
int foldingHash(int key) {
    char strKey[20];
    sprintf(strKey, "%d", key);
    int len = strlen(strKey);
    int sum = 0;
    for (int i = 0; i < len; i += 2) {
        int part = 0;
        if (i + 1 < len) {
            part = (strKey[i] - '0') * 10 + (strKey[i + 1] - '0');
        } else {
            part = (strKey[i] - '0');
        }
        sum += part;
    }
    return sum % TABLE_SIZE;
}
void insert(int key) {
    int index = foldingHash(key);
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
    int keys[] = {1234, 5678, 91011, 1213, 1415, 1617, 1819, 2021};
    int n = sizeof(keys) / sizeof(keys[0]);
    for (int i = 0; i < n; i++) {
        insert(keys[i]);
    }
    displayTable();
    return 0;
}
