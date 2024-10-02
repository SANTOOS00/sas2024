#include <stdio.h>
int main()
{
    int num;
    int i = 0;
    int res;
    printf("num :");
    scanf("%d",&num);
    while (i < 11)
    {
        printf("%d * %d = %d\n",num,i,num * i);
        i++;
    }
    return 0;
}