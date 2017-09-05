#include <stdio.h>
int main()
{
    double w1, w2, w3;

    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &w1, &w2, &w3);

    if( w1>=w2 && w1>=w3 )
        printf("%.2f is the largest number.", w1);

    if( w2>=w1 && w2>=w3 )
        printf("%.2f is the largest number.", w2);

    if( w3>=w1 && w3>=w2 )
        printf("%.2f is the largest number.", w3);

    return 0;
}
