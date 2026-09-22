/*Write a program to print the sum of the first n odd numbers.*/
#include <stdio.h>
void main(){
    int i,n;
    printf("HOW MANY NUMBERS DO U WANNA ADD");
    scanf("%d",n);
    for (i = 0;i>=2*n+1;)
    i = i + 2; 
    printf("%d",i);
}