/*Write a program to calculate the area and circumference of a circle given its radius.*/
#include <stdio.h>
void main(){
    float a,c,d,PI;
    printf("Radius:");
    scanf("%f",&a);
    PI =3.141592653589793;
    c=2* PI *a;
    d=PI*a*a;
    printf("CIRCUMFERENCE:%.2f\t",c);
    printf("AREA:%.2f",d);
}
