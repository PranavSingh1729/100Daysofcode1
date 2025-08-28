//Write a program to input three numbers and find the largest among them using if–else.
#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the value of number\n");
    scanf("%d",&a);
    printf("Enter the value of number\n");
    scanf("%d",&b);
    printf("Enter the value of number\n");
    scanf("%d",&c);

     if(a>b && a>c){
        printf(" %d is the largest among all three numbers",a);
     }
      else if(b>c && b>a){
        printf(" %d is the largest among all three numbers",b);
     }
     else if(c>b && c>a){
        printf(" %d is the largest among all three numbers",c);
     }
     else{
        printf(" 2 or more numbers are same");
     }
     
    return 0;
}
