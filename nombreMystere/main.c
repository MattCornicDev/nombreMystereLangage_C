//
//  main.c
//  nombreMystere
//
//  Created by Matt Cornic on 30/08/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, const char * argv[]) {
    
    
    int nombreMystere = 0, nombreEntre = 0;
    const int MAX = 100, MIN = 1;
    
    // générer nombre aléatoire
    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    
    // boucle
    do
    {
        printf("quel est le nombre ?\n");
        scanf("%d\n", &nombreMystere);
        
        if (nombreMystere > nombreEntre)
            printf("C'est plus \n\n");
        else if (nombreMystere < nombreEntre)
            printf("C'est moin \n\n");
        else
            printf("Bravo ! vous avez trouvé le nombre mystère \n");
        
    } while (nombreEntre != nombreMystere);
   
    return 0;
    
    /*
        1 - l'ordinateur tire au sort un nombre entre 1 et 100;
        2 - Il vous demande de deviner le nombre. Vous entrez donc un nombre entre 1 et 100
        3 - L'ordinateur compare le nombre que vous avez entrer avec le nombre mystère qu'il a tiré au sort. Il vous dit si le nombre mystère est supérieur ou inférieur à celui que vous avez entré.
        4 - Puis l'ordinatur vous redemande le nombre
        5 - Il vous indique si le nombre est supérieur ou inférieur.
        6 - Et ainsi de suite, jusquà ce que vous trouviez le nombre mystère
     
     Le but du jeu est de trouver le nombre mystère en un minimum de coups.
     */
    
}
