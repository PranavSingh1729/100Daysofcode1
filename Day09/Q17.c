//Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, real, imaginary, root1, root2;

    printf("Enter coefficients a, b and c ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0){
        printf("This is not a quadratic equation value of a cannot be 0).\n");
        return 1;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %f\n", root1);
        printf("Root 2 = %f\n", root2);
    }
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root = %f\n", root1);
    }
    else {
    
        real = -b / (2 * a);
        imaginary = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex conjugates.\n");
        printf("Root 1 = %f + %fi\n", real, imaginary);
        printf("Root 2 = %f - %fi\n", real, imaginary);
    }

    return 0;
}