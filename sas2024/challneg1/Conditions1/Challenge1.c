#include <stdio.h>
int main()
{
    int x;
    int y;
    int j;

    printf("Revenu annuel :");
    scanf("%d",&x);

    printf("Score de credit :");
    scanf("%d",&y);

    printf("Durege du pret :");
    scanf("%d",&j);

    if (x >= 30000 && y >= 700 && j <= 10)
    {
        printf("Eligible");
    }
    else if (x >= 30000 && y >= 650 && j <= 15)
    {
        printf("Eligible avec conditions");
    }
    else if (x < 30000 && y < 650 && j > 15)
    {
        printf("Non eligible");
    }
    return(0);
}