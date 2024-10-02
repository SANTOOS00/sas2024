#include<stdio.h>
int main()
{
    double num;

    printf("temperature :");
    scanf ("%lf",&num);

    if (num >= 36.1 && num <= 37.2)
    {
        printf("votre temperature est normale");
    }
    else if (num >= 37.5)
    {
        printf("Vous avez de la fievre");
    }
    return 0;
}