//Find the digit that occurs the most times in an integer number
#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0};
    printf("Enter an integer: ");
    scanf("%lld", &num);

    if (num < 0) num = -num;

    if (num == 0) count[0] = 1;

    while (num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    int max_digit = 0, max_count = count[0];
    for (int i = 1; i < 10; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            max_digit = i;
        }
    }

    printf("The digit that occurs the most times is: %d\n", max_digit);
    return 0;
}