#include <stdio.h>

void rotateRight(int arr[], int n, int k) {
    k = k % n; // Handle k > n
    int temp[n];
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    rotateRight(arr, n, k);

    printf("Rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}