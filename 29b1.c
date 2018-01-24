include <stdio.h>
#include <stdlib.h>

int numMinutes = 106; 

int main ( void )
{
if ( (numMinutes / 60) == 2) 
printf("%02d hour",numMinutes/60);
else 
printf("%02d hours",numMinutes/60);

if ( (numMinutes % 60) == 2)
printf(" %01d minute\n",numMinutes%60);
else 
printf(" %01d minutes\n",numMinutes%60);

return 0;
}
