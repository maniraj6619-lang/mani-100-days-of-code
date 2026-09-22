/*write a program to input a year and check whether it is a leap year or not using conditional statements*/
#include <stdio.h>
void main(){
    int a;
    printf("ENTER YOUR NUMBER:");
    scanf("%d",&a);
    if (a%4==0,a%100!=0)
        printf("LEAP YEAR");
    else if (a%400==0)
        printf("LEAP YEAR");
    else 
        printf("NOT LEAP YEAR");
}





