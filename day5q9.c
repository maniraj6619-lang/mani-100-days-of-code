/*Write a program to calculate simple and compound interest for given principal, rate, and time.*/
#include <stdio.h>
void main(){
    float p,r,t,CI,SI;
    printf("ENTER YOUR PRINCIPAL AMOUNT:");
    scanf("%f",p);
    printf("ENTER THE RATE OF INTEREST:");
    scanf("%f",r);
    printf("ENTER THE TIME:");
    scanf("%f",t);
    SI = p*r*t/100 - p;



