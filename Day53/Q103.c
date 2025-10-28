//Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
#include <stdio.h>

int main() {
    int arr[100], n;
    int totalSum = 0, leftSum = 0;
    int i, pivot = -1;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i];  // calculate total sum
    }

    // Find pivot index
    for (i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];  // sum of elements to the right

        if (leftSum == rightSum) {
            pivot = i;  // found the pivot
            break;      // leftmost, so stop
        }

        leftSum += arr[i];  // update left sum for next index
    }

    // Output result
    printf("Pivot index: %d\n", pivot);

    return 0;
}
