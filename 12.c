#include<stdio.h>
int main()
{
    int num,raj=0,atm,c;
    printf("Enter a number \n");
    scanf("%d",&num);
    atm=num;
    while (num>0)
    {
        c = num % 10;
        raj = raj*10+c;
        num = num/10;
    }
    if (atm == raj)
        printf("\n The entered number is PALINDROME.");
    else
        printf ("\n The entered number is NOT PALINDROME.");
     return 0;

}
