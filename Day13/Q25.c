//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter operator (+, -, *, /, % %): ");
    scanf(" %c", &operator);  


    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %d + %d = %d\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d - %d = %d\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d * %d = %d\n", num1, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                float division = (float)num1 / num2;
                printf("Result: %d / %d = %.2f\n", num1, num2, division);
            }
            break;
        case '%':
            if (num2 == 0) {
                printf("Error: Modulus by zero is not allowed.\n");
            } else {
                result = num1 % num2;
                printf("Result: %d %% %d = %d\n", num1, num2, result);
            }
            break;
        default:
            printf("Invalid operator. Please use +, -, *, /, or %%.\n");
    }

    return 0;
}
