#include <stdio.h>
int main() {   
    // Write a program to input a character and check whether it is a vowel or consonant using if–else.
    char ch;
    scanf(" %c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel.\n", ch);
    } else {
        printf("Consonant.\n", ch);
    }
    return 0;
}

