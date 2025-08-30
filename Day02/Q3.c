//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main(){

    float length,width;
    printf("Enter the length\n");
    scanf("%f", &length);

    printf("Enter the width\n");
    scanf("%f", &width);

    printf("The area of rectange is %f\n", length*width );
    printf("The perimeter of rectangle is %f", 2*(length+width));

    return 0;
}