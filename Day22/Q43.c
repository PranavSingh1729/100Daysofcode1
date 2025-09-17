//Write a program to check if a number is a strong number.
#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, original, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // store original number

    // Extract digits and calculate sum of factorials
    while (num > 0) {
        digit = num % 10;          // get last digit
        sum += factorial(digit);   // add factorial of digit
        num /= 10;                 // remove last digit
    }

    // Check if Strong Number
    if (sum == original) {
        printf("%d is a Strong Number.\n", original);
    } else {
        printf("%d is not a Strong Number.\n", original);
    }

    return 0;
}
