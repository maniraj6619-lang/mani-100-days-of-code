/*Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.*/
#include <stdio.h>
void main(){
    int s1,s2,s3;
    printf("WHAT ARE THE SIDE LENGHTS:");
    scanf("%d %d %d",&s1, &s2, &s3);
    if (s1==s2 && s2==s3)
        printf("EQUILATERAL");
    else if (s1==s2 || s2==s3 || s3==s1)
        printf("ISOCELES");
    else
        printf("SCALENE");
}