#include <stdio.h>
int main()
{
    double i;
    double j = 1093.61;
    double res;

    printf("the distance in kilometres :");
    scanf("%lf",&i);

    res = i * j;
    printf("yards :%.2lf",res);

}