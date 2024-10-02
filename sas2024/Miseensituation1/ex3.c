#include<stdio.h>
int main()
{
    int num;

    printf("number :");
    scanf("%d",&num);

    if (1 >= num)
    {
        printf("1");
    }
    int i = 2;
    while (i == num / i)
    {
        if (num % i == 0)
        {
            printf("ce n'est pas un nomber premier");
            return (0);
        }
        i++;
    }
    printf("c'est un nomber premier  :");
    eturn (0);

}