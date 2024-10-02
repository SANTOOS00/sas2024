#include <stdio.h>
int main ()
{
    int tabl[100];
    int n;
    int x;

    printf("number n ;");
    scanf("%d",&n);
    int i;
    for (i = 0;n > i;i++)
    {
        printf("number [%d] ;",i + 1);
        scanf("%d",&tabl[i]);
    }
    n = i;

    printf("Les chiffres que vous souhaitez consulter ;");
    scanf("%d",&x);

    for (int y = 0;y < n ;y++)
    {
        if (x == tabl[y])
        {
            printf("Ce nombre %d se trouve dans la boite ;[%d]",tabl[y],y+1);
            return (0);
        }
    }
    printf("Il n y a pas de tel numero, merci");
    return (0);
}
