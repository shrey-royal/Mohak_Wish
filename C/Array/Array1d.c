#include<stdio.h>
#include<stdlib.h>

void scanArray(int* a, int size) {
    for(int i=0; i<size; i++) {
        a[i] = rand() % 100;
    }
}

void printArray(int* arr, int size) {
    for(int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    int arr[size];
    scanArray(arr, size);
    printArray(arr, size);
    return 0;
}