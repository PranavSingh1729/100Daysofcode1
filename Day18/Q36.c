//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main() {
    int a, b, hcf;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Please enter positive integers only.\n");
        return 1;
    }

    int min = (a < b) ? a : b;
    for (hcf = min; hcf >= 1; hcf--) {
        if (a % hcf == 0 && b % hcf == 0) {
            break;
        }
    }
    
    printf("HCF (GCD) of %d and %d is %d\n", a, b, hcf);
    return 0;
}