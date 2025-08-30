//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths
#include<stdio.h>

int main(){
    int A,B,C;
    printf("Enter the value of length A\n ");
    scanf("%d",&A );
    printf("Enter the value of length B\n ");
    scanf("%d",&B );
    printf("Enter the value of length C\n");
    scanf("%d",&C );
    
    if(A == B && A == C){
        printf("Triangle is equilateral triange");
    }
    else if( A!=B && B==C || A==B && A!=C || A==C && A!=B){
        printf("Triangle is isosceles");
    }
    else{
        printf("Triangle is scalene");
    }
    return 0;
}