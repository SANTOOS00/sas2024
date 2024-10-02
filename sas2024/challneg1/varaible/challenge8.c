#include <stdio.h>
#include <math.h>
int main()
{
    double num1;
    double num2;
    double num3;
    double res;
    double res2;
    printf("num1 :");
    scanf("%lf",&num1);
    printf("num2 :");
    scanf("%lf",&num2);
    printf("num3 :");
    scanf("%lf",&num3);
    res2 = num1 * num2 * num3;

    res = pow(res2 , 1.0 / 3.0);

    printf("%lf",res);

}