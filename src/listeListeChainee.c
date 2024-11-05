/*
 * listeListeChainee.c
 *
 *  Created on: 1 nov. 2024
 *      Author: Zakaria Chaker
 *              TP11 (Prog 3)
 */

/**
 * Forme polygonale, composée d'unesuite de points.
 * Les points ont des coordonnées x et y (entier)
 *
 */


// Struct Point
typedef struct{
	int x;
	int y;
} Point;

// Structure de la cellule, de la forme:   | * | - | * |
typedef struct Cellule{
	Point p;
	struct Cellule *precedant;
	struct Cellule *suivant;
};



