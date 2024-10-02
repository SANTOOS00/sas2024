#include <stdio.h>
int main()
{
    int num = 6;
    int i = 1;
    int res;
    
    printf("num :");
    scanf("%d",&num);

    while (i <= num)
    {
        res = 2 * i;
        i++;
        printf("%d",res);
        if (num != i - 1)
        {
            printf(",");
        }
    }
    return(0);
}
