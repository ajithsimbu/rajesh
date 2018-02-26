#include<stdio.h>
void main()
{
int a[10],i,b,n;
printf("enter the array size:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
b=n/2;
printf("%d",a[n]);
}
