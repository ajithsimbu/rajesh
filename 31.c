include<stdio.h>
#include<conio.h>
int main()
{
 int count_words=0;
 int i;
 int count_char=0;
 char str[30];
 printf("Enter string : ");
 gets(str);
 for(i=0; str[i]!=NULL; i++)
 {
   count_char++;
    count_words++;
   if(str[i]==' ')
      
 }
 printf("\n enter the Number of characters in string : %d",count_char);
 printf("\n enter the Number of words in string : % d",count_words+1); 
 getch();
 return 0;
}
