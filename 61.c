#include<stdio.h>
void main()
{
    int b,i; char a[50];
    printf("enter the number:");
    scanf("%d",&b); 
    printf("enter the character:");
   scanf("%s",&a);
   for(i=0;i<b;i++)
    {
        printf("%c",a[i]);
    }
}

