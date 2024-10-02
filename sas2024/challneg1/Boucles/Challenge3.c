#include<stdio.h>
int main()
{
    int num;
    int res = 0;

    printf("num :");
    scanf("%d",&num);

    while (num > 0)
    {
        res = res + num;
        num--;
    }
    printf("%d",res);
    return 0;
}