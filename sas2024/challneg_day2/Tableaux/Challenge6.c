#include <stdio.h>
int main ()
{
    int tabl[100];
    int i = 0;
    int n;
    int res = 1;
    int somi;
    
    printf("number ;");
    scanf("%d",&n);

    while (n > i)
    {
        printf("number%d :",i + 1);
        scanf ("%d",&tabl[i]);
        i++;
    }
        printf("number :");
        scanf ("%d",&somi);
    for (int k = 0;n > k;k++)
    {
        tabl[k] = tabl[k] * somi;
    }
    int k;
    while (n > k)
    {
        printf("%d\n",tabl[k]);
        k++;
    }
    return (0);
}