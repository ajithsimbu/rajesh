#include<stdio.h>
void main()
{
    int n,b,a[10],c,i=0;
    scanf("%d",&n);
    while(n!=0)
    {
        b=n%10;
        a[i]=b;
        i++;
        n=n/10;
        
    }
    for(c=i-1;c>=0;c--)
    {
        printf("%d\t",a[c]);
    }
}
