#include"triangle.h"
#include"point.h"
#include<iostream>
#include<assert.h>

void ptest1();
void ptest2();
void ptest3();
void ptest4();
void test1();
void test2();
void test3();
void test4();
void test5();
void test6();
void test7();
void test8();

int main()
{
	try
	{
		ptest1();
		ptest2();
		ptest3();
		ptest4();
		test1();
		test2();
		test3();
		test4();
		test5();
		test6();
		test7();
		test8();
	}
	catch (const char *s)
	{
		std::cout << s << std::endl;
	}
	system("pause");
	return 0;
}
void ptest1()
{
	std::cout << "ptest1" << std::endl;
	point A;
	assert(A._x() < EPS && A._y() < EPS);
	std::cout << "(" << A._x() << "," << A._y() << ")" << std::endl;
}
void ptest2()
{
	std::cout << "ptest2" << std::endl;
	point A(1, 2);
	point B = A;
	assert((B._x() - 1)<EPS && (B._y() -2)<EPS);
	std::cout<< "(" << B._x() << "," << B._y() << ")" << std::endl;
}
void ptest3()
{
	std::cout << "ptest3" << std::endl;
	point A(2, 3);
	assert((A._x() - 2) < EPS && (A._y() - 3) < EPS);
	std::cout << "(" << A._x() << "," << A._y() << ")" << std::endl;
}
void ptest4()
{
	std::cout << "ptest4" << std::endl;
	point A(0, 3);
	point B(4, 0);
	assert((A.rasst(B)-5) < EPS);
	std::cout << A.rasst(B) << std::endl;
}
void test1()
{
	std::cout << "Test1" << std::endl;
	tria  T1;
	assert(T1._A()._x() < EPS && T1._A()._y() < EPS && T1._B()._x() < EPS && T1._B()._y() < EPS && T1._C()._x() < EPS && T1._C()._y() < EPS);
	std::cout << "(" << T1._A()._x() << "," << T1._A()._y() << ")" << "(" << T1._B()._x() << "," << T1._B()._y() << ")" << "(" << T1._C()._x() << "," << T1._C()._y() << ")" << std::endl;
}
void test2()
{
	std::cout << "Test2" << std::endl;
	point A(2, 2);
	point B(0, 1);
	point C(11, 6);
	tria T(A, B, C);
	tria T1(T);
	assert((T1._A()._x() - 2) < EPS && (T1._A()._y() - 2) < EPS && (T1._B()._x() - 0) < EPS && (T1._B()._y() - 1) < EPS && (T1._C()._x() - 11) < EPS && (T1._C()._y() - 6) < EPS);
	std::cout << "(" << T1._A()._x() << "," << T1._A()._y() << ")" << "(" << T1._B()._x() << "," << T1._B()._y() << ")" << "(" << T1._C()._x() << "," << T1._C()._y() << ")" << std::endl;
}
void test3()
{
	std::cout << "Test3" << std::endl;
	point A(1, 2);
	point B(5, 6);
	point C(-1, 8);
	tria T1(A, B, C);
	assert((T1._A()._x() - 1) < EPS && (T1._A()._y() - 2) < EPS && (T1._B()._x() - 5) < EPS && (T1._B()._y() - 6) < EPS && (T1._C()._x() - (-1)) < EPS && (T1._C()._y() - 8) < EPS);
	std::cout << "(" << T1._A()._x() << "," << T1._A()._y() << ")" << "(" << T1._B()._x() << "," << T1._B()._y() << ")" << "(" << T1._C()._x() << "," << T1._C()._y() << ")" << std::endl;
}
void test4()
{
	point A(1, 2);
	point B(6, 5);
	point C(2, 3);
	point A1(1, 2);
	point B1(6, 5);
	point C1(2, 3);
	tria T(A, B, C);
	tria T1(A1, B1, C1);
	std::cout << "Test4" << std::endl;
	assert(T == T1);
	if (T == T1)
		std::cout << "triangles are equal" << std::endl;
}
void test5()
{
	point A(1, 2);
	point B(6, 5);
	point C(2, 3);
	tria T1;
	tria T(A, B, C);
	double a = 5;
	double b = 3;
	std::cout << "Test5" << std::endl;
	T1 = T.sdvig(a, b);
	assert((T1._A()._x() - 6) < EPS && (T1._A()._y() - 5) < EPS && (T1._B()._x() - 11) < EPS && (T1._B()._y() - 8) < EPS && (T1._C()._x() - 7) < EPS && (T1._C()._y() - 6) < EPS);
	std::cout << "(" << T1._A()._x() << "," << T1._A()._y() << ")" << "(" << T1._B()._x() << "," << T1._B()._y() << ")" << "(" << T1._C()._x() << "," << T1._C()._y() << ")" << std::endl;
}
void test6()
{
	point A(1, 2);
	point B(6, 5);
	point C(2, 3);
	tria T1;
	tria T(A, B, C);
	double cosa = 1;
	T1 = T.povorot(cosa);
	std::cout << "Test6" << std::endl;
	assert((T1._A()._x() - 1) < EPS && (T1._A()._y() - 2) < EPS && (T1._B()._x() - 6) < EPS && (T1._B()._y() - 5) < EPS && (T1._C()._x() - 2) < EPS && (T1._C()._y() - 3) < EPS);
	std::cout << "(" << T1._A()._x() << "," << T1._A()._y() << ")" << "(" << T1._B()._x() << "," << T1._B()._y() << ")" << "(" << T1._C()._x() << "," << T1._C()._y() << ")" << std::endl;
}
void test7()
{
	point A(1, 2);
	point B(6, 5);
	point C(2, 3);
	point A1(2, 4);
	point B1(12, 10);
	point C1(4, 6);
	tria T(A, B, C);
	tria T1(A, B, C);
	std::cout << "Test7" << std::endl;
	assert(T.podobie(T1) == true);
	if (T.podobie(T1) == true)
		std::cout << "triangles are podobni" << std::endl;
}
void test8()
{
	double a = 1, b = 0, c = 0, d = 0, x0 = 5, y0 = 7;
	std::cout << "Test8" << std::endl;
	point A(1, 2);
	point B(6, 5);
	point C(2, 3);
	tria T1;
	tria T(A, B, C);
	T1 = T.affpreo(a, b, c, d, x0, y0);
	assert((T1._A()._x() - 6) < EPS && (T1._A()._y() - 7) < EPS && (T1._B()._x() - 11) < EPS && (T1._B()._y() - 7) < EPS && (T1._C()._x() - 7) < EPS && (T1._C()._y() - 7) < EPS);
	std::cout << "(" << T1._A()._x() << "," << T1._A()._y() << ")" << "(" << T1._B()._x() << "," << T1._B()._y() << ")" << "(" << T1._C()._x() << "," << T1._C()._y() << ")" << std::endl;
}
