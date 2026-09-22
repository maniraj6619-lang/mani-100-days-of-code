/*Write a program to find profit or loss percentage given cost price and selling price.*/
#include <stdio.h>
void main(){
    float CP,SP,PER;
    PER = 0;
    printf("WHAT IS YOUR COST PRICE AND SELLING PRICE: ");
    scanf("%f %f",&CP,&SP);
    if(CP>=SP)
        PER = 100*(CP-SP)/CP;                                                                                    
    else 
        PER = 100* (SP-CP)/CP;
    printf("%.2f",PER);
}
