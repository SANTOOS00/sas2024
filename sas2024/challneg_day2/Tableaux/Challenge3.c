#include <stdio.h>
int main ()
{
    int tabl[100];
    int i = 0;
    int n;
    int res = 0;
    printf("number ;");
    scanf("%d",&n);

    while (n > i)
    {
        printf("number%d :",i + 1);
        scanf ("%d",&tabl[i]);
        i++;6
    }
    for (int k = 0;n > k;k++)
    {
        res = res + tabl[k];
    }
    printf("%d",res);
    return (0);
}