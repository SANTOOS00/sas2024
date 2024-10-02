#include <stdio.h>
int main()
{
    double num1;
    double num2;
    double res1;
    double res2;
    double res3;
    double res4;

    printf("num1 :");
    scanf("%lf",&num1);

    printf("num2 :");
    scanf("%lf",&num2);
    res1 = num1 + num2;
    res2 = num1 - num2;
    res3 = num1 * num2;
    res4 = num1 / num2; 

    printf("Calcule la somme :%.2lf\n",res1);
    printf("Calcule la difference :%.2lf\n",res2);
    printf("calcule de Multiplication :%.2lf\n",res3);
    printf("Calcule le quotient :%.2lf\n",res4);
}