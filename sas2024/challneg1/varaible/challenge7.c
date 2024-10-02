#include <stdio.h>
int main()
{
    double num1;
    double num2;
    double num3;
    double res;
    

    printf("num1 :");
    scanf("%lf",&num1);

    printf("num2 :");
    scanf("%lf",&num2);

    printf("num3 :");
    scanf("%lf",&num3);

    res = (5 * num3) + (3 * num2) + (2 * num1);
    res = res / 10;
    printf("reslta%.2lf",res);
}