//Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int num, reversed = 0, temp, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        reversed = reversed * 10 + remainder;
        temp /= 10;
    }
    if (num == reversed)
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);
    return 0;
}