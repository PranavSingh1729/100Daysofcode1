//Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include<stdio.h>

int main(){
     char alphabets;
     printf("Enter the alphabet\n");
     scanf("%c",&alphabets);

     if(( alphabets == 'a') || (alphabets== 'e') || (alphabets=='i')  ||  (alphabets=='o') ||  (alphabets=='u') ||
     ( alphabets == 'A') || (alphabets== 'E') || (alphabets=='I')  ||  (alphabets=='O') ||  (alphabets=='U')){
        printf("The character is vowel");
     }
     else{
        printf("The character is constant");
     }
    
    return 0;
}