//Write a program to convert temperature from Celsius to Fahrenheit
#include<stdio.h>

int main(){
    float celsius,fahrenheit;
    printf("Enter temperature in celsius\n");
    scanf("%f",&celsius);

    printf("The value of fahrenheit is %f", (celsius*(9/5))+32);

    
    return 0;
}