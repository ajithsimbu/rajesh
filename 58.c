#include<stdio.h>
void main()
{
int a,b;
scanf("%d%d",&a,&b);
a^=b;
b^=a;
a^=b;
printf("before swapping %d\n%d\n",a,b);
printf("after swapping %d\n%d\n",b,a);
}
