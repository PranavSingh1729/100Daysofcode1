#include<stdio.h>

int main(){
    float a;
    float b;
    printf("Enter the value of a\n");
    scanf("%f",&a);
    printf("Enter the value of b\n");
    scanf("%f",&b);

    if( b == 0){
    printf("The value is not defined\n");
    }
    else{
         printf("The quotient of a and b is %f", (a/b));
    }

    printf("The sum of a and b is %f\n", a+b);
    printf("The difference of a and b is %f\n", a-b);
    printf("The product of a and b is %f\n", a*b);
    return 0;
}