#include <stdio.h>
void main()
{
   int a,b,temp;
 scanf("%d%d", &a, &b);
   printf("before Swapping\n%d\n%d\n",a,b);
   temp=a;
   a=b;
   b=temp;
   printf("after Swapping\n%d\n%d\n",a,b);
  
}

