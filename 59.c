#include <stdio.h>
int main() 
{
int a[10];
int i;
int max;
printf("Enter nine values:");
for (i = 0; i < 10; i++)
{
scanf("%d",&a[i]);
}
max = a[0];
for (i=0;i<10;i++)
{
if (a[i]>max)
{
max=a[i];
}
}
printf("max of ten numbers is %d",max);
return 0;
  }
