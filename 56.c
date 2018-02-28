#include <stdio.h>
void main()
{
   int x,y,temp;
printf("Enter value of x and y\n");
 scanf("%d%d", &x, &y);
   printf("before Swapping\n%d\n%d\n",x,y);
   temp=x;
   x=y;
   y=temp;
   printf("after Swapping\n%d\n%d\n",x,y);
  
}
