#include <stdio.h>
int main()
{
    int num;
    int i = 1;
    printf("num :");
    scanf("%d",&num);

    while (num > 0)
    {
        i = i * num;
        num--;
    }
    printf("%d",i);
    return 0;
}