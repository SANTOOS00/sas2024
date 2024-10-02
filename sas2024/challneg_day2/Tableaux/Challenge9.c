#include  <stdio.h>
int main()
{
    int tabl[100];
    int i;
    int n;
    printf("nmber n : ");
    scanf ("%d",&n);

    for (i = 0;n > i;i++)
    {
        printf("number tabl %d",i + 1);
        scanf("%d",&tabl[i]);
    }
    printf("number no swap :");
    int g = 0;
    while(n > g)
    {
        printf ("%d ",tabl[g]);
        g++;
    }
    printf("\n");
    for (int k = 0;k < n / 2;k++)
    {
        int timp = tabl[k];
        tabl[k] = tabl[n - 1 - k];
        tabl[n - 1 - k] = timp;
    }
    printf("number swap :");
    for (int t = 0;t < n;t++)
    {
        printf("%d ",tabl[t]);
    }
    return (0);
}