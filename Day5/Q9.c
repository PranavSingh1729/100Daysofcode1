// Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include<math.h>

int main(){
   float principal,rate,time;
   

    printf("Enter the value of principal\n");
    scanf("%f", &principal);
    printf("Enter the value of rate\n");
    scanf("%f", &rate);
    printf("Enter the value of time\n");
    scanf("%f", &time);

    printf("Simple intrest is :%f\n", (principal*rate*time)/100.0); 
    printf("Compound intrest is :%f", (principal*(pow(1+rate/100.0,time))));
    
    
    return 0;
}