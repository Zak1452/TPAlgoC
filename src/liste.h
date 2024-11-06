/*
 * listeListeChainee.h
 *
 *  Created on: 1 nov. 2024
 *      Author: Zakaria Chaker
 */

#ifndef LISTE_H_
#define LISTE_H_

//Prototypage
typedef struct{
	int x;
	int y;
} Point;

typedef struct cellule{
	Point p;
	struct cellule *precedant;
	struct cellule *suivant;

}Cellule;
Cellule *NouvCel(Point p);
void InsererCellule(int pl, Cellule *cel, Cellule *liste);
void SupprimerCellule(int pl, Cellule *liste);
void Afficher(Cellule *liste);

#endif
