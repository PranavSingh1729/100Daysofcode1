#include<stdio.h>

int main(){
    int a,b,m;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a,&b);

    m = a;
    a = b;
    b = m;

    printf("After swapping: a = %d, b = %d\n",a,b);

    return 0;
}