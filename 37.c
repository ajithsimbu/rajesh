#include<stdio.h>
#include<conio.h>
int swap (int *,int *);
int main()
{
int i,j,n,b;
printf("enter two numbers n & a");
scanf("%d %d",&n,&b);
swap(&n,&b);
printf("after swap n=%d a=%d",n,b);
}
int swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
    }
   
