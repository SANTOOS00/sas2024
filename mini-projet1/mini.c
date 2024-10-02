#include<stdio.h>
#include <string.h>

#define max_contact 100
#define max_char 50
struct contact
{
    char Nom[max_char];
    char Numer[max_char];
    char Adresse_e_mail[max_char];
};

struct contact contacts[max_contact];
int size =0;
int n;

//-----------------------------ajouter-----------------------------------------------------------------------------
void Ajouter()
{
    if ( size >= max_contact)
    {
        printf("contact max !!!");
        return ;
    }
    if (size < max_contact)
    {
        printf("Ajouter un contact...\n");

        printf ("\nNom ; ");
        scanf (" %[^\n]",contacts[size].Nom);

        printf ("\nNumero de telephone  ; ");
        scanf (" %[^\n]",contacts[size].Numer);


        printf ("\nAdresse e-mail ; ");
        scanf (" %[^\n]",contacts[size].Adresse_e_mail);
        
        
        size++;
        printf("Contact ajoute avec succes !\n");
    }
}
//------------------------------------------modifier-----------------------------------------------------------
void Modifier()
{
    int i =0;
    char nom1[max_char];

    printf("Modifier un contact...\n");
    printf("Quel est le compte sur lequel vous souhaitez changer son numero et son adresse ; ");
    scanf (" %[^\n]",nom1);
    
    char numer1[max_char];
    char adress1[max_char];
    
    while (i < size)
    {
        if (strcmp(contacts[i].Nom,nom1) == 0)
        {
            printf("changer son numero");
            scanf ("%s",numer1);
            printf("changer son adresse");
            scanf ("%s",adress1);
            strcpy(contacts[i].Numer,numer1);
            strcpy(contacts[i].Adresse_e_mail,adress1);
            
            printf(" \nont ete modifiees :) \n");
            return ;
        }
        i++;
    }
    printf("\nCela sera compte, il n y a pas de %s \n",nom1);

}
//---------------------------------------------------supprimer---------------------------------------------------
void Supprimer()
{
    char supp[max_char];
        if (size == 0)
        {
            printf("no contact !!!");
            return;
        }
    printf("contact supprimer ; ");
    scanf(" %[^\n]",supp);
    
    int i= 0;
    while (i < size)
    {
        if (i > size)
        {
            printf("no contact !!!");
            return;
        }

        if (strcmp(contacts[i].Nom,supp) == 0)
        {
            int h = i;
            while (h < size)
            {
                strcpy(contacts[h].Nom,contacts[h + 1].Nom);
                strcpy(contacts[h].Numer,contacts[h + 1].Numer);
                strcpy(contacts[h].Adresse_e_mail,contacts[h + 1].Adresse_e_mail);
                h++;
            }
            
        }
        i++;
    }
    printf("contact supprime :)");
    size--;
}

void Afficher()
{
    int i = 0;
    if (size == 0)
    {
        printf("no contact :)");
    }
    while (i < size)
    {
        printf("\n nom : %s",contacts[i].Nom);
        printf("\n Numer :%s",contacts[i].Numer);
        printf("\n adress e-mail :%s",contacts[i].Adresse_e_mail);
        i++;
    }
    return;
}
//------------------------------Rechercher----------------------------------------------------
void Rechercher()
{
    char nom1[max_char];
    printf("Rechercher contact ; ");
    scanf(" %[^\n]",nom1);

    int i = 0;
    while (i <size)
    {
        if (strcmp(contacts[i].Nom,nom1) == 0)
        {
            printf("\nNom ; %s",contacts[i].Nom);
            printf("\nNom ; %s",contacts[i].Numer);
            printf("\nNom ; %s",contacts[i].Adresse_e_mail);
            return ;
        }
    }i++;
    if (0 == size)
    {
        printf("no contact !!!!");
        return ;
    }
}

int main() 
{
    while (1)
    {
        printf("\nSysteme de Gestion de Contacts\n");
        printf("1. Ajouter un Contact\n");
        printf("2. Modifier un Contact\n");
        printf("3. Supprimer un Contact\n");
        printf("4. Afficher Tous les Contacts\n");
        printf("5. Rechercher un Contact\n");
        
        printf("Choisissez un numero: ");
        scanf("%d", &n);
        
        switch (n)
        {
            case 1:
                Ajouter();
                break;
            case 2:
                Modifier();
                break;
            case 3:
                Supprimer();
                break;
            case 4:
                Afficher();
                break;
            case 5:
                Rechercher();
                break;
            default:
                printf("hada ali5tyar la youjad .\n");
                break;
        }
    }
    return 0;
}


