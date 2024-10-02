#include<stdio.h>

int main()
{
    double temperature;

    printf("temperature :");
    scanf("%lf",&temperature);

    if (temperature < 0)
    {
        printf ("Solid");
    }
    else if (temperature > 0 && temperature < 100)
    {
        printf ("Liquide");
    }
    else if (temperature > 100)
    {
        printf ("Gaz");
    }
}