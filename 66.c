#include <stdio.h> 
main() 
{
  int n,i,c=0;
  printf("enter a number n:");
  scanf("%d",&n);
  for (i = 1;i<=n;i++) 
  {
      if (n%i==0) 
      {
         c++;
      }
  }

  if (c==2) 
  {
  printf(" Prime number");
  }
  else {
  printf(" not Prime number");
  }
  return 0;    
}
