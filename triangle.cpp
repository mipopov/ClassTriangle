#include"triangle.h"
#include"point.h"

tria ::tria()
{
	A.x = 0;
	A.y = 0;
	B.x = 0;
	B.y = 0;
	C.x = 0;
	C.y = 0;
}
tria::tria (point _A,point _B,point _C)
{
	A = _A;
	B = _B;
	C = _C;
	if ((fabs(A.rasst(B) + B.rasst(C) - A.rasst(C)) < EPS || fabs(A.rasst(B) + B.rasst(C) - A.rasst(C)) < EPS || fabs(A.rasst(B) + B.rasst(C) - A.rasst(C)) < EPS))
		throw "Points ly on one line";
}
tria::tria(const tria &T)
{
	A = T.A;
	B = T.B;
	C = T.C;
}
tria tria::sdvig(double a, double b)
{
	A.x = A.x + a;
	A.y = A.y + b;
	B.x = B.x + a;
	B.y = B.y + b;
	C.x = C.x + a;
	C.y = C.y + b;
	return *this;
	
}
tria tria::povorot(double cosa)
{
	double sina = sqrt(1 - cosa*cosa);
	A.x = A.x *cosa - sina*A.y;
	A.y = A.x*sina + cosa*A.y;
	B.x = B.x *cosa - sina*B.y;
	B.y = B.x*sina + cosa*B.y;
	C.x = C.x *cosa - sina*C.y;
	C.y = C.x*sina + cosa*C.y;
	return *this;
}
bool tria::operator==(const tria &tri)
{
	double AB, BC, AC, A1B1, B1C1, A1C1;
	AB = A.rasst(B);
	BC = B.rasst(C);
	AC = A.rasst(C);
	A1B1 = tri.A.rasst(tri.B);
	B1C1 = tri.B.rasst(tri.C);
	A1C1 = tri.A.rasst(tri.C);

	if ((AB- A1B1)<EPS && (BC- B1C1)<EPS && (AC - A1C1)<EPS)
		return true;
	else
		return false;
}
bool tria:: podobie(const tria &tri)
{
	double AB, BC, AC, A1B1, B1C1, A1C1,k;
	AB = A.rasst(B);
	BC = B.rasst(C);
	AC = A.rasst(C);
	A1B1 = tri.A.rasst(tri.B);
	B1C1 = tri.B.rasst(tri.C);
	A1C1 = tri.A.rasst(tri.C);
	k = AB / A1B1;
	if ( (BC / B1C1 - k)<EPS && (AC / A1C1 - k)<EPS)
		return true;
	else
		return false;
}
tria tria::affpreo(double a, double b, double c, double d, double x0, double y0)
{
	A.x = A.x*a + b*A.y + x0;
	A.y = A.x*c + d*A.y + y0;
	B.x = B.x*a + b*B.y + x0;
	B.y = B.x*c + d*B.y + y0;
	C.x = C.x*a + b*C.y + x0;
	C.y = C.x*c + d*C.y + y0;
	return *this;
}
const point & tria::_A() const
{
	return A;
}
const point  &tria::_B() const 
{
	return B;
}
const point & tria ::_C() const 
{
	return C;
}
