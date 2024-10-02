#include <stdio.h>
int main()
{
    int num;
    int res;

    printf("nmber ;");
    scanf("%d",&num);

    while (num > 0)
    {
        res = num % 10;
        printf("%d",res);
        num = num / 10;
    }
    return(0);
}