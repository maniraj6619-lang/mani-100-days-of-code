/*Write a program to input time in seconds and convert it to hours:minutes:seconds format.*/
#include <stdio.h>
void main()
{
    int OSEC,HOUR,MINUTE,REMAINDER,SECOND;
    printf("Enter time (in Seconds): ");
    scanf("%d",&OSEC);
    HOUR = OSEC/3600;
    REMAINDER = OSEC % 3600;
    SECOND = REMAINDER % 60;
    MINUTE = REMAINDER/60;

    printf("%d:%d:%d", HOUR, MINUTE, SECOND);
}