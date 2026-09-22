/*Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.*/
#include <stdio.h>
void main(){
    int a;
    printf("WHAT IS YOUR GRADE:");
    scanf("%d",&a);
    if (a<60)
        printf("GRADE F");
    else if (60 <= a && a <= 69)
        printf("GRADE D");
    else if (70 <= a && a <= 79)
        printf("GRADE C");
    else if (80 <= a && a <= 89)
        printf("GRADE B");
    else if (90 <= a && a <= 100)
        printf("GRADE A");
    else   
        printf("WRONG INPUT");
}