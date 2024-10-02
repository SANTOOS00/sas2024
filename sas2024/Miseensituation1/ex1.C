#include <stdio.h>
int main()
{
    int base;
    int hauteur;

    printf("base :");
    scanf ("%d",&base);
    printf ("hauteur :");
    scanf ("%d",&hauteur);

    printf("Aire = %d\n",base * hauteur / 2);
    printf("Perimetre = %d",3 * base);
    return(0);
}