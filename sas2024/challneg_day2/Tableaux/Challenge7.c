#include <stdio.h>
int main()
{
    int tabl[100];
    int n;
    int p = 0;

    printf("number tabl :");
    scanf ("%d",&n);

    while (n > p)
    {
        printf("number%d :",p + 1);
        scanf("%d",&tabl[p]);
        p++;
    }
    int i = 0;
    while (n > i)
    {
        int j = 1 + i;
        while (j < n)
        {
            if (tabl[i] > tabl[j])
            {
                int min = tabl[j];
                tabl[j] = tabl[i];
                tabl[i] = min;
            }
            j++;
        }
        i++;
    }
    int l = 0;
    while (n > l)
    {
        printf("%d ,",tabl[l]);
        l++;
    }
    return 0;
}