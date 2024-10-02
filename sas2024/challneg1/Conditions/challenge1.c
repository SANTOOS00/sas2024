#include <stdio.h>
int main()
{
    int num;

    printf("num :");
    scanf("%d",&num);

    if (0 == num % 2)
    {
        printf("pair");
    }
    else if (0 < num % 2)
    {
        printf("impair");
    }
}