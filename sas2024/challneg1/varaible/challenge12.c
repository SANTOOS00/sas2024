#include <stdio.h>
int main()
{
    int a;
    printf("number :");
    scanf("%d",&a);
    int b;
    int c;
    int d;
    b = a / 10;
    a = a % 10;
    printf("%d",a);
    c = b / 10;
    a = b % 10;
    printf("%d",a);
    d = c / 10;
    a = c % 10;
    printf("%d",a);
    a = d % 10;
    printf("%d",a);
}