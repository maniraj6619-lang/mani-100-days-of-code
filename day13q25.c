/*Write a program to implement a basic calculator using switch-case for +, -, *, /, %.*/
#include <stdio.h>
void main(){
    int a,b;
    char c;
    printf("WHAT ARE THE OPERANDS: ");
    scanf("%d %d",&a,&b);
    printf("WHAT IS THE OPERATOR(+,-,*,/,%%):");
    scanf(" %c",&c);
    switch(c){
    case '+' : printf("%d",a+b); break;
    case '-' : printf("%d",a-b); break;
    case '*' : printf("%d",a*b); break;
    case '/' : printf("%f",a*1.0/b); break;
    case '%' : printf("%d",a%b); break;
    }
}