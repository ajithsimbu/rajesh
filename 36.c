#include <stdio.h>

int main()
{
	int count=0,i;
	char s[50];
	gets(s);
	for(i=0;s[i];i++)
	{	
         if(ispunct(s[i]))
         {
         	count++;
         }

	}
	printf("%d",count);
	return 0;
}
