/*Write a program to calculate the area and perimeter of a rectangle given its length and breadth.*/
#include <stdio.h>
void main(){
    int a,b,c,d;
    printf("LENGTH:");
    scanf("%d",&a);
    printf("BREADTH:");
    scanf("%d",&b);
    c=a*b;
    d=2*(a+b);
    printf("AREA:%d\t",c);
    printf("PERIMETER:%d\t",d);
}

