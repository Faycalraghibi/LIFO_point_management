#include <iostream>
#include "ListeChainee.h"

using namespace std;

int main() {
	try {
		ListeChainee liste;
		int choix;
		int x, y, indice;

		do {
			cout << "Menu:" << endl;
			cout << "1. Ajouter un point" << endl;
			cout << "2. Modifier un point" << endl;
			cout << "3. Supprimer un point" << endl;
			cout << "4. Visualiser un point" << endl;
			cout << "5. Quitter" << endl;
			cout << "Entrez votre choix : ";
			cin >> choix;

			switch (choix) {
			case 1:
				cout << "Entrez les coordonnees x et y du point a ajouter : \n";
				std::cout << "x : ";
				std::cin >> x;
				std::cout << "y : ";
				std::cin >> y;
				liste.ajouterPoint(new Point(x, y));
				break;
			case 2:
				cout << "Entrez l'indice du point a modifier : ";
				cin >> indice;
				cout << "Entrez les nouvelles coordonnees x et y : \n";
				std::cout << "x : ";
				std::cin >> x;
				std::cout << "y : ";
				std::cin >> y;
				liste.modifierPoint(indice, x, y);
				break;
			case 3:
				cout << "Entrez l'indice du point a supprimer : ";
				cin >> indice;
				liste.supprimerPoint(indice);
				break;
			case 4:
				cout << "Entrez l'indice du point a  visualiser : ";
				cin >> indice;
				liste.visualizerPoint(indice);
				break;
			case 5:
				cout << "Au revoir !" << endl;
				break;
			default:
				cout << "Choix invalide, veuillez reessayer." << endl;
			}
		} while (choix != 5);

	

	}
	catch (const char* e) {
		cerr << "Exception: " << e << endl;
	}
	return 0;
}


