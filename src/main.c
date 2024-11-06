/*
 * main.c
 *
 *  Created on: 6 nov. 2024
 *      Author: tretec
 */
#include <stdlib.h>
#include <stdio.h>
#include "listeListeChainee.h"

void affichageMenu()
{
	printf("*****Programme Liste Chainee*****");
	printf("\n\n1.Inserer une cellule dans la liste.");
	printf("\n2. Supprimer une cellule de la liste.");
	printf("\n3. Affichage de la liste");
	printf("\n4. Sortie du programme");
}
int main()
{
	Cellule *a, *c;
	Point p;

	int pos, choix;
	p.x = -1;
	p.y = -1;
    a = NouvCel(p);
	do
	{
		affichageMenu();
		printf("\n\nSaisir votre choix: ");
		fflush(stdout);
		scanf("%d", &choix);
	    switch(choix)
	        {
	            case 1 :
	            	printf("Saisir les coordonnees du point a inserer (.. ..): ");
	            	fflush(stdout);
	                scanf("%d %d", &p.x, &p.y);
	                printf("\nSaisir la position de ce point: ");
	                fflush(stdout);
	                scanf("%d", &pos);

	                c = NouvCel(p);
	                InsererCellule(pos, c, a);
	                break;
	            case 2 :
	            	printf("\nSaisir la position du point a supprimer: ");
	            	fflush(stdout);
	                scanf("%d", &pos);
	                SupprimerCellule(pos, a);
	                break;
	            case 3 :
	            	printf("\nAffichage de la liste: \n");
	                Afficher(a);
	                break;
	            case 4 :
	            	printf("\nSortie du programme");
	            	break;
	            default :
	            	printf("\nChoix incorrect\n");
	            	break;
	        }
	    }while(choix!=4);
	    return EXIT_SUCCESS;

}
