#include <stdio.h>
int main()
{
    char nam[30];
    char prenom[30];
    int age;
    char sexe[30];

    printf("nom :");
    scanf("%s",nam);
    
    printf("prenom :");
    scanf("%s",prenom);

    printf("age :");
    scanf("%d",&age);

    printf("sexe :");
    scanf("%s",sexe);

    printf("nam :%s\n",nam);
    printf("prenom :%s\n",prenom);
    printf("age :%d\n",age);
    printf("sexe :%s\n",nam);
    
}