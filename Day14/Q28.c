//Write a program to print the product of even numbers from 1 to n
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long product = 1; 
     // Using long long for large values
    int foundEven = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {  
        product *= i;
        foundEven = 1;
    }

    if (foundEven) {
        printf("Product of even numbers from 1 to %d is: %llu\n", n, product);
    } else {
        printf("No even numbers found between 1 and %d.\n", n);
    }

    return 0;
}
