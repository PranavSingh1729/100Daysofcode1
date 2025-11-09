//Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max_sum = arr[0];     // to store the maximum sum found so far
    int current_sum = arr[0]; // current running sum

    for (int i = 1; i < n; i++) {
        // either extend the previous subarray or start a new one
        if (current_sum + arr[i] > arr[i])
            current_sum = current_sum + arr[i];
        else
            current_sum = arr[i];

        // update max_sum if current_sum is greater
        if (current_sum > max_sum)
            max_sum = current_sum;
    }

    printf("Maximum subarray sum = %d\n", max_sum);
    return 0;
}

