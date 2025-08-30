//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include<stdio.h>

int main(){
    char ch;
    printf("Enter a charcter\n");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z'){
        printf("The character is uppercase alphabet\n");
    }
    else if(ch>='a' && ch<='z'){
        printf("The character is lowercase alphabet\n");
    }
    else if(ch>='0' && ch<='9'){
        printf("The character is digit\n");
    
    }
    else{
        printf("The character is special character");
    }

    return 0;
}