#include <stdio.h>
int main ()
{
    int tabl[100];
    int n;
    int x;
    int r;

    printf("number n ;");
    scanf("%d",&n);

    for (int i = 0;n > i;i++)
    {
        printf("number [%d] ;",i + 1);
        scanf("%d",&tabl[i]);
    }
    printf("number 1 :");
    for (int i = 0;i < n;i++)
    {
        printf("%d ,",tabl[i]);
    }

    printf("Quel numero souhaitez-vous changer ? ;");
    scanf ("%d",&x);

    printf("Quel numero changez-vous avec ce numero %d? ;",x);
    scanf("%d",&r);

    for (int e = 0;e < n;e++)
    {
        if (x == tabl[e])
        {
            tabl[e] = r;
        }
    }

    printf("number 2 ; ");
    for (int p = 0;p < n;p++)
    {
        printf("%d , ",tabl[p]);
    }
    return(0);
}