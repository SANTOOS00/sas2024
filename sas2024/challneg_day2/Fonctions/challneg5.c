#include <stdio.h>
int Factorielle(int n)
{
    int res = 1;

    int i = 1;
    while (n >= i)
    {
        res = res * i;
        i++;
    }
    return res;
}