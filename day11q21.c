/*Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/
#include <stdio.h>
void main(){
    int a;
    printf("WHAT IS YOUR MONTH NUMBER.");
    scanf("%d",&a);
    switch(a){
    case 1 : printf("JANUARY 31 days"); break;
    case 2 : printf("FEBURARY 28 days"); break;
    case 3 : printf("MARCH 31 days"); break;
    case 4 : printf("APRIL 30 days"); break;
    case 5 : printf("MAY 31 days"); break;
    case 6 : printf("JUNE 30 days"); break;
    case 7 : printf("JULY 31 days"); break;
    case 8 : printf("AUGUST 31 days"); break;
    case 9 : printf("SEPTEMBER 30 days"); break;
    case 10 : printf("OCTOBER  31 days"); break;
    case 11 : printf("NOVEMBER 30 days"); break;
    case 12 : printf("DECEMBER 31 days"); break;
    default : printf("YOUR INPUT IS WRONG");
    }
}