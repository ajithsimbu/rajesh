#include <stdio.h>
#include<string.h>
int main()
{
	int count=0,i;
	char s[50];
	gets(s);
	for(i=0;s[i];i++)
		{
		if(isalpha(s[i]))
		{
		printf("");
		}
	else if(isspace(s[i]))
  {
  	 printf("");
}
        else if(ispucnt(s[i]))
{
        printf("");
}
			
		else
		{
		count++;
		}
	}
	printf("%d",count);
	return 0;
}



