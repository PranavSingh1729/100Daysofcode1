#include<stdio.h>

int main(){
    float radius,r;
    float pie = 3.14;

    printf("Enter the value of radius\n");
    scanf("%f",&radius);
    
    printf("Circumference of circle is %f", 2*pie*radius);
    printf("Area of circle is %f", 2*pie*radius*radius);
    return 0;
}