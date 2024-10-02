#include <stdio.h>
void chaine(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    i--;
    while (i >= 0)
    {
        printf("%c",str[i]);
        i--;
    }
}
int main()
{
    char str[] = "mohamed";
    chaine(str);
    return 0;
}