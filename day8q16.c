/*write a program to input three numbers and find the largest among them using if-else.*/
#include <stdio.h>
void main(){
    int a,b,c;
    printf("WHAT ARE YOUR NUMBERS:");
    scanf("%d %d %d",&a,&b,&c);
    if (a>=b && a>=c)
        printf("LARGEST NUMBER=%d",a);
    else if (b>=a && b>=c)
        printf("LARGEST NUMBER=%d",b);
    else 
        printf("LARGEST NUMBER=%d",c);
}