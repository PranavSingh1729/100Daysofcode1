//Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int num, first, last, temp, pow = 1, middle, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    temp = num;
    while (temp >= 10) {
        temp /= 10;
        pow *= 10;
    }
    first = temp;

    // Remove first and last digits to get middle part
    middle = num % pow;   // removes first digit
    middle = middle / 10; // removes last digit

    // Construct swapped number
    swapped = last * pow + middle * 10 + first;

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}
