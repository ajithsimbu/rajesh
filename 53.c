#include<stdio.h>
void main()
{
    int n,b,sum;
    scanf("%d",&n);
    while(n!=0)
    {
        b=n%10;
        sum=sum+b;
        n=n/10;
    }
   
printf("%d",sum);
}
