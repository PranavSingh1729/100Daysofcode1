#include<stdio.h>

int main(){
    int a,b;
    
    printf("Enter two numbers:");
    scanf("%d %d", &a,&b);

    printf("Before swap: a= %d, b = %d\n", a,b);
    a = a + b; // a now stores sum of original a and b
    b = a - b; // b is now original a
    a = a - b; // a is real b now.

    printf("After swaf: a = %d , b = %d\n", a,b);
    return 0;
}