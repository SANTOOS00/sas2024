#include <stdio.h>
#include <unistd.h>
int main()
{
    char i;

    printf("charachtr :");
    scanf("%s",&i);

    switch (i)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        case 'y':
        case 'Y':
        printf("voyelle");
        break;
        default:
        printf("no voyelle");
        break;
    }

}