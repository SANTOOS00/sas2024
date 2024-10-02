#include <stdio.h>
int main()
{
    int num1;
    int num2;
    int res = 1;

    printf("num :");
    scanf("%d",&num1);

    printf("exposant :");
    scanf("%d",&num2);

    while (num2 > 0)
    {
        res = res * num1;
        num2--;
    }
    printf("%d",res);
    return(0);
}