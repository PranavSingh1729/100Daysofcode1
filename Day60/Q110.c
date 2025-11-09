//Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

#include <stdio.h>

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[1000];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter window size k: ");
    scanf("%d", &k);

    // Deque to store indices of useful elements
    int dq[1000];
    int front = 0, back = 0; // front and back pointers

    printf("Maximum elements in each window:\n");

    for (int i = 0; i < n; i++) {
        // Remove elements from front that are outside this window
        while (front < back && dq[front] <= i - k)
            front++;

        // Remove all elements smaller than the current element (from back)
        while (front < back && arr[dq[back - 1]] <= arr[i])
            back--;

        // Add current element index at the back
        dq[back++] = i;

        // Starting from index k-1, print max of each window
        if (i >= k - 1)
            printf("%d ", arr[dq[front]]);
    }

    printf("\n");
    return 0;
}
