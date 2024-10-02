#include <stdio.h>
#include <math.h>

int main ()
{
    double i = 3.14159;
    double rayon;
    double La_taille_de_la_boule_est_de;

    printf("le rayon :");
    scanf("%lf",&rayon);

    La_taille_de_la_boule_est_de = (4.0 / 3.0)* i * pow(rayon , 3);
    printf("La taille de la boule est de : %.2lf",La_taille_de_la_boule_est_de);


}