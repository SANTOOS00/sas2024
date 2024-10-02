#include <stdio.h>
int main()
{
    int num;
    int i[100];
    int j = 0;

    printf("number :");
    scanf ("%d",&num);

    while (num > 0)
    {
        i[j] = num % 10;
        num = num / 10;
        j++;
    }
    int x = j - 1;
    while (x >= 0)
    {
        printf("%d",i[x]);
        x--;
    }
}