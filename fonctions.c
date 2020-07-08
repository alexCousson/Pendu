#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define GAGNANT 1
#define PERDANT 0


char lireCaractere()
{
    char caractere = 0;

    caractere = getchar(); // On lit le premier caractère
    caractere = toupper(caractere); // On met la lettre en majuscule si elle ne l'est pas déjà

    // On lit les autres caractères mémorisés un à un jusqu'au \n (pour les effacer)
    while (getchar() != '\n') ;

    return caractere; // On retourne le premier caractère qu'on a lu
}

int devoileLettre(char motSecret[], char caractere)
{
    char chaine1[100] = "Salut ", chaine2[] = "Mateo21";



    char motDevoile[100]= "";
    char asterisque[] = "*";
    int i = 0;
    int longueurMot = 0;
    longueurMot = strlen(motSecret);


    for(i=0; i < longueurMot; i++)
    {

        if(motSecret[i] == caractere)
        {
            strcat(motDevoile, &caractere);

        }
        else
        {
            strcat(motDevoile, asterisque);
        }


    }
    printf("Mot finalement devoile : %s\n\n", motDevoile);

    return 0;

}

