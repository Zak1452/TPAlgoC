/*
 * listeListeChainee.h
 *
 *  Created on: 5 nov. 2024
 *      Author: tretec
 */

#ifndef LISTELISTECHAINEE_H_
#define LISTELISTECHAINEE_H_

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
