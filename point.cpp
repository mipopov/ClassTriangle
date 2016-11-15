#include "point.h"

point::point()
{
	x = 0;
	y = 0;
}
point::point(double x1, double y1)
{
	x = x1;
	y = y1;
}
point::point(const point &a)
{
	x = a.x;
	y = a.y;
}
double point:: rasst(point A) const
{
	return sqrt(pow((A.x - x), 2) + pow((A.y - y), 2));
}
point point:: operator=(const point a)
{
	x = a.x;
	y = a.y;
	return *this;
}
const double &point::_x() const
{
	return x;
}
const double &point::_y() const
{
	return y;
}
