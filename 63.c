#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
printf("enter the paragraph:\n");
scanf("%c",s);
int i,b,a=0;
b=strlen(s);
for(i=0;i<=b;i++)
{
if(isspace(s[i]))
{
a++;
}
}
printf("number of words=%d",a+1);
return 0;
}
