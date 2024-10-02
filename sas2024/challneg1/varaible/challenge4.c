#include <stdio.h>
int main()
{
    double i;
    double j = 3.6;
    double res;

    printf("kilomètres par heure (km/h)");
    scanf("%lf",&i);

    res = i / j;
    printf("mètres par seconde (m/s)%.2lf",res);
}