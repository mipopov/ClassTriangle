#ifndef _TRIANGLE_H_
#define _TRIANGLE_H_
#include <cmath>
#include"point.h"
#define EPS 1e-20

class tria
{
public:
	tria();
	tria(point _A,point _B,point _C);
	tria(const tria & T);
	bool operator==(const tria &tri);
	tria povorot(double cosa);
	tria sdvig(double a, double b);
	tria affpreo(double a, double b, double c, double d, double x0, double y0);
	bool podobie(const tria &tri);
	const point &_A() const;
	const point &_B() const;
	const point &_C() const;
private:
	point A;
	point B;
	point C;
};
#endif
