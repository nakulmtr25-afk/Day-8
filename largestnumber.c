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
        printf("%d is greatest",a);
    }
    else if(b>a && b>c){
        printf("%d is greatest",b);
    }
    else if(c>a && c>b){
        printf("%d is greatest",c);
    }else {
        printf("all are equal");
    }
    return 0;
}
