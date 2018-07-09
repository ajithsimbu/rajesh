 #include<stdio.h>
#include<string.h>
void main()
{
    char c[50];
    int i,a,b=0,k;
    scanf("%s",c);
    a=strlen(c);
    k=a;
    for(i=0;i<a;i++)
    {
        if(c[i]!=c[k-1])
        {
            b=1;
        }k--;
    }
    if(b!=1)
    {
        printf("palindrome ");
    }
        else
        {
        printf("not polindrome");
         }
}

