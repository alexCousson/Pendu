#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonctions.h"

int main()
{
    char caractere = NULL;
    char* motSecret = "MARRON";
    char *suiteMot = NULL;
    int i = 0;
    int nbreLettre = 5;
    int nbreCoupsRestants = 10;
    int issue = PERDANT;
    int longueurMot = strlen(motSecret);

    printf("Bienvenue dans le Pendu !\n\n");

    while(nbreCoupsRestants > 0 || issue == PERDANT)
    {



        printf("Il vous reste %d coups a jouer\n", nbreCoupsRestants);
        printf("Quel est le mot secret \n");
        printf("Proposez une lettre : ");

        caractere = lireCaractere();
        devoileLettre(motSecret, caractere);


        /*
        printf("@ du premier caractère du mot : %x\n\n", motSecret);
        printf("Lettre %c\n", motSecret[0]);
        printf("@ du deuxième caractère du mot : %x\n\n", &motSecret[1]);
        printf("Lettre %c\n", motSecret[1]);
        printf("@ du 3ème caractère du mot : %x\n\n", &motSecret[2]);
        */



    }


    return 0;
}

