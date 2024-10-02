#include <stdio.h>
int parite(int number)
{
    if (0 == number % 2)
        return 1;
    else
    return 0;
}
int main()
{
    int number = 3;
    printf("%d",parite(number));
    return 0;
}