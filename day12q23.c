/*Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/
#include <stdio.h>
void main(){
    int a;
    printf("How many days have you not paid the fine:");
    scanf("%d",&a);
    if (0 < a && a <= 5)
         printf("YOUR FINE IS: %d", 2 * a);
    else if (5 < a && a <= 10)
        printf("YOUR FINE IS: %d", 10 + ( a - 5 ) * 4);
    else if (10 < a && a <= 30)
        printf("YOUR FINE IS:%d", 30 + ( a - 10 ) * 6);
    else if (a > 30)
        printf("YOUR MEMBERSHIP IS CANCELLED.");
    else
        printf("YOUR GOOD TO GO") ;
}
