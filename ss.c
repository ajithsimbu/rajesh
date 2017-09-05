#include <stdio.h>
int main()
{
    char c;
    int isLwrcaseVowel, isUpprcaseVowel;

    printf("Enter an alphabet: ");
    scanf("%c",&c);

    
    isLwrcaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    
    isUpprcaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    
    if (isLwrcaseVowel || isUpprcaseVowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}
