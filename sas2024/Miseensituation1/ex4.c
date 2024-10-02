#include <stdio.h>
int main()
{
    float misaha[100];
    int i = 0;
    int n;

    printf("number :");
    scanf("%d",&n);

    while(n > i)
    {
        printf("number%d =",i + 1);
        scanf("%f",&misaha[i]);
        i++;
    }
    float max = misaha[0];
    float asra = misaha[1];

    int y = 1;
    while (n > y)
    {
        if (misaha[y] > max)
        {
            max = misaha[y];
        }
        y++;
    }
    int z = 1;
    while (n > z)
    {
        if(misaha[z] < asra)
        {
            asra = misaha[z];
        }
        z++;
    }
    printf("max :%f",max);
    printf("asra :%f",asra);
    return (0);
}