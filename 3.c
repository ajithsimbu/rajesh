#include<stdio.h>
int main()
{
char ch;
printf("enter the alphapet value:");
scanf("c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{
printf("/n %c a value is vowel.",ch);
}
else
{
printf("/n %c a value is constant.",ch);
}
return 0;
}
