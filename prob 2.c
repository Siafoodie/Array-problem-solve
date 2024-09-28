#include <stdio.h>

void re(int arr[], int size) {
    int temp[size];

    
    for (int i = 0; i < size; i++) {
        temp[i] = arr[size - 1 - i];
    }

    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    re(arr, size);

    
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
}
