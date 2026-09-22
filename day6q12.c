/*write a program to input an integer and check whether it is positive, negative or zero using nested if-else.*/
#include <stdio.h>
void main(){
    int a;
    printf("ENTER YOUR NUMBER:");
    scanf("%d",&a);
    if (a!=0)
        if (a>0)
            printf("POSITIVE");
        else 
            printf("NEGATIVE");
    else 
        printf("ZERO");
}