#include <stdio.h>
void main()
{
int i,n,largest=0,small=0;
int a[i];
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
if(a[i]>largest)
{
largest=a[i];
}
for(i=0;i<n;i++)
if(a[i]<small)
{
small=a[i];
}
printf("%d",largest);
printf("%d",small);
}


