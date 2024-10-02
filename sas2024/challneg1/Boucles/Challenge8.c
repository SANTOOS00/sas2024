#include <stdio.h>
int main ()
{
    int i;
    int res = 0;

    printf("number :");
    scanf("%d",&i);

    if (i < 0)
    {
        printf("%d",i);
    }
    if (i == 0)
    {
        printf("%d",i);
    }
    if (i == 1)
    {
        printf ("%d",i);
    }
    while (i > 0)
    {
        i--;
        res = res + i;
        if (i == 1)
        {
            printf("%d",res);
        }
    }
    return (0);
}