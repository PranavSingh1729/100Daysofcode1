//Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
#include <stdio.h>

int main() {
    int m, n;
    printf("Enter size of first array: ");
    scanf("%d", &m);
    int arr1[100];
    printf("Enter %d elements (sorted):\n", m);
    for (int i = 0; i < m; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n);
    int arr2[100];
    printf("Enter %d elements (sorted):\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr2[i]);

    int merged[200];
    int i = 0, j = 0, k = 0;

    // Merge process
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements (if any)
    while (i < m)
        merged[k++] = arr1[i++];

    while (j < n)
        merged[k++] = arr2[j++];

    // Print merged array
    printf("Merged sorted array:\n");
    for (int x = 0; x < k; x++)
        printf("%d ", merged[x]);
    printf("\n");

    return 0;
}
