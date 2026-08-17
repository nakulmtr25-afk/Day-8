// Q16: Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter number a : ");
    scanf("%d",&a);
    printf("Enter number b : ");
    scanf("%d",&b);
    printf("Enter number c : ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("a is greatest");
    }
    else if(b>a && b>c){
        printf("b is greatest");
    }
    else if(c>a && c>b){
        printf("c is greatest");
    }else {
        printf("all are equal");
    }
    return 0;
}
