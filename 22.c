include<stdio.h>
 
int main() {
   int a[30], i, num, largenum;
 
   printf("\nEnter no of elements :");
   scanf("%d", &num);
   for (i = 0; i < num; i++)
      scanf("%d", &a[i])
   largenum = a[0];
 
   for (i = 0; i < num; i++) {
      if (a[i] > largenum) {
         largenum = a[i];
      }
   }
 
   printf("\nLargest Element : %d", largenum);
 
   return (0);
}
