/*
 * listeListeChainee.c
 *
 *  Created on: 1 nov. 2024
 *      Author: Zakaria Chaker
 *              TP11 (Prog 3)
 */

#include "liste.h"

#include <stdio.h>
#include <stdlib.h>

// Struct Point


// Structure de la cellule, de la forme:   | * | - | * |


// Alloue l'espace memoire pour une cellule, remplit les champs des la structure cellule et retourne un pointeur sur cette cellule.
Cellule *NouvCel(Point p)
{
	Cellule *nouvelleCellule = (Cellule*) malloc(sizeof(Cellule));

	if(!nouvelleCellule)
	{
		printf("\nErreur allocation memoire.");
		return NULL;
	}

	nouvelleCellule->p = p;
	nouvelleCellule->suivant = NULL;
	nouvelleCellule->precedant = NULL;

	return nouvelleCellule;
}

// Permet d'inserer la cellule cel apres la place pl dans liste
/*
 *               |precedant|Cel|suivant|
 *                       ^           |
 *                       |           v
 *  |*|CelA|B|-> |A|CelB|C|---X---> |B|CelC|D
 */
void InsererCellule(int pl, Cellule *cel, Cellule *liste)
{
	Cellule *celluleInter = liste; //Sert a balayer la liste.
	    int pos=0;
	    while(pl>pos && celluleInter !=NULL)
	    {
	        celluleInter = celluleInter->suivant;
	        pos++;
	    }
	    if (celluleInter ==NULL)
	    {
	        printf("La position n'existe pas\n");
	        EXIT_FAILURE;
	    }
	    else{
	        cel->suivant = celluleInter->suivant;
	        cel->precedant = celluleInter;
	        if (celluleInter->suivant != NULL)
	        {
	            celluleInter->suivant->precedant = cel;

	        }
	        celluleInter->suivant = cel;
}
}
// Permet de supprimer la cellule passée en parametre à la position pl dans liste.
void SupprimerCellule(int pl, Cellule *liste)
{
   Cellule* inter = liste;
   int pos = 0;
   while (inter != NULL && pos < pl) {
       inter = inter->suivant;
       pos++;
   }
   if (inter == NULL) {
	   printf("La position n'existe pas.\n");
	   EXIT_FAILURE;
   }
   else
   {
	   if (inter->precedant != NULL)
	   {
		   inter->precedant->suivant = inter->suivant;
	   }
	   if (inter->suivant != NULL)
	   {
           inter->suivant->precedant = inter->precedant;
       }
       free(inter);
   }
}
// Fonction qui permet d'afficher la liste en entier
void Afficher(Cellule *liste)
{
	Cellule *inter = liste;
	int i=1;
	while(inter != NULL)
	{
		printf("Contenu de la cellule %d: \tx: %d\ty: %d\n", i, inter->p.x, inter->p.y);
		i++;
		inter = inter->suivant;
	}
}
