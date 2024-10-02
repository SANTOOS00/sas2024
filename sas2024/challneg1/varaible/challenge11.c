#include <stdio.h>
int main()
{
    double longueur;
    double largeur;

    printf("longueur :");
    scanf("%lf",&longueur);

    printf("largeur :");
    scanf("%lf",&largeur);

    printf("Surface :%.2lf",longueur * largeur); 

}