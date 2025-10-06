//Count positive, negative, and zero elements in an array
#include <stdio.h>

int main() {
    int n, i, num;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    printf("Zero: %d\n", zero);

    return 0;
}