#include<stdio.h>
#include<string.h>
void main()
{
    int i,a=0,b=0,d; char s[100];
    printf("enter the char:");
    scanf("%s",&s);
        d=strlen(s);
 for(i=0;i<d;i++)
 {
     if((s[i]=='0')||(s[i]=='1'))
    {
         b++;
}
     else
     {
        c++; 
     }
    
 }
 if(b==0)
    printf("yes");
    else
    printf("no");
}
