#include <stdio.h>
int main()
{
    int tabl[100];
    int n;
    printf("number ;");
    scanf ("%d",&n);

    for (int i = 0; n > i;i++)
    {
        printf ("number%d :",i +1);
        scanf ("%d",&tabl[i]);
    }
    for (int k = 0;n > k;k++)
    {
        printf("%d , ",tabl[k]);
    }
    return 0;
}
