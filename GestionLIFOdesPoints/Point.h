#ifndef POINT_H
#define POINT_H

class Point {
private:
	int x;
	int y;
public:
	Point(int x_val, int y_val);
	void definirX(int nouveau_x);
	void definirY(int nouveau_y);
	int obtenirX();
	int obtenirY();
};

#endif // POINT_H
