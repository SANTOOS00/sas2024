#include <stdio.h>
int main()
{
    double i;
    double j = 273.15;
    double k;
    printf("Daytime temperature :");
    scanf("%lf",&i);
    
    k = i + j;

    printf("Kelvin :%.2lf",k);
    

}