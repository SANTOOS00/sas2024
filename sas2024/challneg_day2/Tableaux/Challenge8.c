#include <stdio.h>
int main()
{
    int tabl[100];
    int tablcop[100];
    int n;
    printf("number :");
    scanf("%d",&n);

    int i = 0;
    while (n > i)
    {
        printf("numbr%d ",i+1);
        scanf ("%d",&tabl[i]);
        i++;
    }
    int f = 0;
    while (f < n)
    {
        tablcop[f] = tabl[f];
        f++;
    }
    int e = 0;
    printf("orijin :");
    while (e < n)
    {
        printf("%d ",tabl[e]);
        e++;
    }
    int z = 0;

    printf("\ncope :");
    while (z < n)
    {
        printf("%d ",tablcop[z]);
        z++;
    }
    return 0;
}