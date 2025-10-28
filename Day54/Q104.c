//Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
#include <stdio.h>

int main() {
    int n, x, leftSum, rightSum, found = 0;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Loop to find pivot integer x
    for (x = 1; x <= n; x++) {
        // sum(1 to x) = x*(x+1)/2
        leftSum = x * (x + 1) / 2;

        // sum(x to n) = sum(1 to n) - sum(1 to x-1)
        rightSum = (n * (n + 1) / 2) - ((x - 1) * x / 2);

        if (leftSum == rightSum) {
            printf("Pivot integer: %d\n", x);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("No pivot integer (-1)\n");

    return 0;
}
