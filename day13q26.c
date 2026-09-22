/*Write a program to print numbers from 1 to n.*/
#include <stdio.h>
void main(){
    int i,n;
    printf("HOW MANY NUMBERS DO U WANT TO PRINT: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
        printf("%d\n",i);
}