//Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include<stdio.h>

int main(){
    int year;
    printf("Enter the value of year\n");
    scanf("%d", &year);

    if(( year%4 == 0 && year%4 != 100)|| year%4/400){
        printf("It is a leap year\n");
    }
    else{
        printf("It is not  a leap year");
    }
    return 0;
}