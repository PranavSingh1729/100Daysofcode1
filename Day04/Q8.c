//Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>

int main(){
    int n, sum;

    printf("Enter a positive. integer :");
    scanf("%d",&n);

    // using formula 
    // sum = n(n+1)/2
    sum = (n*(n+1)/2);
    printf("THE SUM OF THE FIRST %D NATURAL NUMBERS IS :%d\n",n,sum);
    
  return 0;
}