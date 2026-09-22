/*Write a program to input two numbers and display their sum, difference, product, and quotient.*/
#include <stdio.h>
void main(){
    int a,b;
    scanf("%d %d",&a ,&b);
    printf("ADDITION:%d\t",a+b);
    printf("SUBTRACTION:%d\t",a-b);
    printf("MULTIPLICATION:%d\t",a*b);
    b==0 ? printf("cannot divide by zero") : printf("RESULT:%d",a/b);
}
