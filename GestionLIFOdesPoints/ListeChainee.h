#ifndef LISTECHAINEE_H
#define LISTECHAINEE_H

#include "Point.h"

class Noeud {
public:
	Point* donnee;
	Noeud* suivant;
	Noeud(Point* p);
};

class ListeChainee {
private:
	Noeud* tete;
public:
	ListeChainee();
	~ListeChainee();
	void ajouterPoint(Point* p);
	void modifierPoint(int indice, int nouveau_x, int nouveau_y);
	void supprimerPoint(int indice);
	void visualizerPoint(int indice);
};

#endif // LISTECHAINEE_H
