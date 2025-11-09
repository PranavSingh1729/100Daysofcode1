//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d elements (numbers from 1 to n-1, one repeated):\n", n);

    int sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // single loop: read & calculate sum
    }

    // Expected sum of numbers from 1 to n-1
    int expected_sum = (n - 1) * n / 2;

    int repeated = sum - expected_sum;
    printf("Repeated element = %d\n", repeated);

    return 0;
}
