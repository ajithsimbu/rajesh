#include <stdio.h>
int main()
{
    int num,i;
    int fact;
    printf("Enter an integer number: ");
    scanf("%d",&num);
    fact=1;
    for(i=num; i>=1; i--)
        fact=fact*i;
    printf("\nFactorial of %d is = %ld",num,fact);
    return 0;
}
