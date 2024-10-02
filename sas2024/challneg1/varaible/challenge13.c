#include <stdio.h>
int main()
{
    int num;
    int misaha[200];
    int i = 0;
    int misaha1[200];
    int k = 0;
    

    printf ("number ;");
    scanf("%d",&num);
    int num1 = num;

    while (num > 0)
    {
        misaha[i] = num % 2;
        num = num / 2;
        i++;
    }
    int x = i - 1;
    while (x >= 0)
    {
        printf("%d",misaha[x]);
        x--;
    }
    printf("\n");

    while (num1 > 0)
    {
        misaha1[k] = num1 % 16;
        num1 = num1 / 16;
        k++;
    }
    
    int e = k - 1;
    while (e >= 0)
    {
        if (misaha1[e] > 0 && misaha1[e] < 10)
        {
            printf("%d",misaha1[e]);
        }
        if (misaha1[e] == 10)
        {
            printf ("A");
        }
        if (misaha1[e] == 11)
        {
            printf ("B");
        }
        if (misaha1[e] == 12)
        {
            printf ("C");
        }
        if (misaha1[e] == 13)
        {
            printf ("D");
        }
        if (misaha1[e] == 14)
        {
            printf ("E");
        }
        if  (misaha1[e] == 15)
        {
            printf ("F");
        }
        e--;
    }
    return(0);
}