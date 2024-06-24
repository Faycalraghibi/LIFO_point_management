#include "ListeChainee.h"
#include <iostream>

using namespace std;

Noeud::Noeud(Point* p) : donnee(p), suivant(nullptr) {}

ListeChainee::ListeChainee() : tete(nullptr) {}

ListeChainee::~ListeChainee() {
	Noeud* actuel = tete;
	while (actuel != nullptr) {
		Noeud* suivant = actuel->suivant;
		delete actuel->donnee; 
		delete actuel;         
		actuel = suivant;
	}
}

void ListeChainee::ajouterPoint(Point* p) {
	Noeud* nouveauNoeud = new Noeud(p);
	nouveauNoeud->suivant = tete;
	tete = nouveauNoeud;
}

void ListeChainee::modifierPoint(int indice, int nouveau_x, int nouveau_y) {
	Noeud* actuel = tete;
	int compteur = 0;
	while (actuel != nullptr) {
		if (compteur == indice) {
			actuel->donnee->definirX(nouveau_x);
			actuel->donnee->definirY(nouveau_y);
			return;
		}
		actuel = actuel->suivant;
		compteur++;
	}
	throw "Indice hors de la plage";
}

void ListeChainee::supprimerPoint(int indice) {
	if (tete == nullptr)
		throw "La liste est vide";

	if (indice == 0) {
		Noeud* temp = tete;
		tete = tete->suivant;
		delete temp->donnee;
		delete temp;
		return;
	}

	Noeud* actuel = tete;
	int compteur = 0;
	while (actuel->suivant != nullptr) {
		if (compteur == indice - 1) {
			Noeud* temp = actuel->suivant;
			actuel->suivant = temp->suivant;
			delete temp->donnee;
			delete temp;
			return;
		}
		actuel = actuel->suivant;
		compteur++;
	}
	throw "Indice hors de la plage";
}

void ListeChainee::visualizerPoint(int indice){
	Noeud* actuel = tete;
	int compteur = 0;
	while (actuel != nullptr) {
		if (compteur == indice) {
			cout << "Point a l'indice " << indice << ": (" << actuel->donnee->obtenirX() << ", " << actuel->donnee->obtenirY() << ")\n";
			return;
		}
		actuel = actuel->suivant;
		compteur++;
	}
	throw "Indice hors de la plage";
}
