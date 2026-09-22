/*write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit or special character.*/
#include <stdio.h>
void main() {
    char a;
    printf("ENTER YOUR CHARACTER:");
    scanf("%c",&a);
    if (a >= 65 && a <= 90)
        printf("UPPERCASE");
    else if (a >= 97 && a <= 122) 
        printf("LOWERCASE");
    else if (a >= 48 && a <= 57) 
        printf("DIGIT");
    else 
        printf("SPECIAL CHARACTERS");
}
