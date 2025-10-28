//Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
#include <stdio.h>

int main() {
    int nums[100], n, target;
    int i, first = -1, last = -1;

    // Input: size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input: sorted array
    printf("Enter %d elements (sorted): ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    // Input: target element
    printf("Enter target element: ");
    scanf("%d", &target);

    // Find first and last occurrence
    for (i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1)
                first = i;     // store first occurrence
            last = i;          // keep updating last occurrence
        }
    }

    // Output results
    if (first == -1)
        printf("Target not found: -1, -1\n");
    else
        printf("First occurrence: %d (index %d)\nLast occurrence: %d (index %d)\n",
               nums[first], first, nums[last], last);

    return 0;
}
