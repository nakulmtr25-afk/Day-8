// Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include<stdio.h>
int main(){
    
    char ch;
    printf("Enter character : ");
    scanf("%c",&ch);
    if(ch>= 'a' && ch<='z'){
        printf("Lowercase Alphabet");
    }
    else if (ch >='1' && ch<= '9'){
        printf("Digits");
    }
    else if(ch>='A' && ch<= 'Z'){
        printf("UpperCase Alphabet");
    }
    else{
        printf("Special Character");
    }
    
}
