#include <stdio.h>
int main()
{
    int tabl[100];
    int n;

    printf("number tabl :");
    scanf ("%d",&n);

    for (int i = 0;n > i;i++)
    {
        printf("number %d :",i + 1);
        scanf("%d",&tabl[i]);
    }
    int max = tabl[0];
    int y = 0;
    while(n > y)
    {
        if (max < tabl[y])
        {
            max = tabl[y];
        }
        y++;
    }
    printf("max : %d",max);
    return(0);
}