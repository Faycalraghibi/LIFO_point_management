#include "Point.h"

Point::Point(int x_val, int y_val) : x(x_val), y(y_val) {}

void Point::definirX(int nouveau_x) {
	x = nouveau_x;
}

void Point::definirY(int nouveau_y) {
	y = nouveau_y;
}

int Point::obtenirX(){
	return x;
}

int Point::obtenirY(){
	return y;
}
