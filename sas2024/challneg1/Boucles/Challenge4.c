#include <stdio.h>
int main()
{
    int num;
    int i = 0;
    int res;

    printf("num :");
    scanf("%d",&num);

    while (num > i)
    {
        res = 2 * i + 1;
        i++;
        printf("%d",res);
        if(num != i)
        {
            printf(",");
        }

    }
    return(0);
}