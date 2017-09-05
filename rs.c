#include <stdio.h>

int main()
{
    char rs;
    
    
    printf("Enter any character: ");
    scanf("%c", &rs);
    

    if((rs >= 'a' && rs <= 'z') || (rs >= 'A' && rs <= 'Z'))
    {
        printf("Character is an ALPHABET.");
    }
    else
    {
        printf("Character is NOT ALPHABET.");
    }

    return 0;
}
