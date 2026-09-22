/*write a program to input a character and check whether it is a vowel or consonant using if-else*/
#include <stdio.h>
void main(){
    char LETTER;
    printf("WHATS YOUR ALPHABET:");
    scanf("%c",&LETTER);
    if (LETTER =="a",LETTER=="i",LETTER=="e",LETTER=="o",LETTER=="u")
        printf("YOUR ALPHABET IS A VOWEL");
    else 
        printf("YOUR ALPHABET IS A CONSONANT");
}    