//Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, realPart, imaginaryPart, root1, root2;

    printf("Enter coefficients a, b and c ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0){
        printf("This is not a quadratic equation value of a cannot be 0).\n");
        return 1;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %lf\n", root1);
        printf("Root 2 = %lf\n", root2);
    }
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root = %lf\n", root1);
    }
    else {
    
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex conjugates.\n");
        printf("Root 1 = %lf + %lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %lf - %lfi\n", realPart, imaginaryPart);
    }

    return 0;
}