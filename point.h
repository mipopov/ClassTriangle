#ifndef _POINT_H_
#define _POINT_H_
#include<iosfwd>
#include<cmath>
#define EPS 1e-20

class point
{
public:
	friend class tria;
	point();
	point(double x1, double y1);
	point(const point &a);
	point operator=(const point a);
	double rasst(point A) const;
	const double &_x() const;
	const double &_y() const;
private:
	double x;
	double y;
};
#endif
