#include<stdio.h>
void main()
{
    char a[100];
    int i,l,f=0;
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]!=a[l-i-1])
    {
        f=1;
        break;
    }
    }
    if(f==0)
    {
        printf("%s is  palindrome",a);
        
    }
    
        else
        {
            printf("%s is  not palindrome",a);
        }
    
    
}
