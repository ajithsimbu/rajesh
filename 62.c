#include<stdio.h>
#include<string.h>
void main()
{
    int i,b=0,c=0,d; char a[100];
    printf("enter the char:");
    scanf("%s",&a);
        d=strlen(a);
 for(i=0;i<d;i++)
 {
     if((a[i]=='0')||(a[i]=='1'))
    {
         b++;
}
     else
     {
        c++; 
     }
    
 }
 if(c==0)
    printf("yes");
    else
    printf("no");
}
