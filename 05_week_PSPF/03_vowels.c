//* VOWEL PROGRAMM
#include <stdio.h>
int main() {
    char letter;
    printf("Enter a character ");
    scanf("%c" , &letter);
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
    {
        printf("Given character is a vowel");
    }
    else
       printf("Given character is a consonant");

    return 0;  
}
