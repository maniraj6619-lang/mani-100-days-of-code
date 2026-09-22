/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/
#include <stdio.h>
void main(){
    int a;
    printf("HOW MANY UNITS OF ELECTRICITY YOU HAVE USED:");
    scanf("%d",&a);
    if (0 < a && a <= 100)
        printf("YOUR ELECTRICITY BILL IS:%d", a*5);
    else if (100 < a && a <= 200)
        printf("YOUR ELECTRICITY BILL IS:%d", 100*5+(a-100)*7);
    else if (200 < a && a <= 300) 
        printf("YOUR ELECTRICITY BILL IS:%d", 100*5+100*7+(a-200)*10);
    else if (300 < a)
        printf("YOUR ELECTRICITY BILL IS:%d",100*5+100*7+100*10+(a-300)*12);
    else
        printf("YOUR INPUT iS WRONG");
}