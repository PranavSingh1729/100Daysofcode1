//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d elements (from 0 to n, one missing):\n", n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Expected sum of numbers from 0 to n
    int total = n * (n + 1) / 2;

    // Actual sum of the elements given
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];

    int missing = total - sum;

    printf("Missing number = %d\n", missing);
    return 0;
}
