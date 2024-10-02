#include<stdio.h>
int main()
{
    int tabl[100] = {1,2,3,4,5};
    int i = 0;
    while (tabl[i])
    {
        printf("%d\n",tabl[i]);
        i++;
    }
    return (0);
}