#include <QCoreApplication>
#include <iostream>
#include <cmath>

#define PI 3.14

int beg01(int a)
{
	return a * 4;
}

int beg02(int a)
{
	return a * a;
}

int beg03(int a, int b)
{
	return 2 * a * b;
}

int beg04(int d)
{
	return PI * d;
}

int beg05(int a)
{
	return a * a * a && 6 * a * a;
}

int beg06(int a, int b, int c)
{
	return a * b * c && 2 * ((a * b) + (b * c) + (a * c));
}

int beg07(int R)
{
	return 2 * PI * R && PI * std::pow(R, 2);
}

int beg08(int a, int b)
{
	return (a + b) / 2;
}

int beg09(int a, int b)
{
	return std::sqrt(a * b);
}

int beg10(int a, int b)
{
	a = a * a;
	b = b * b;
	return a + b && a - b && a * b && a / b;
}

int beg11(int a, int b)
{
	return a + b && a - b && a * b && std::abs(a) / std::abs(b);
}

int beg12(int a, int b)
{
	return sqrt(std::pow(a, 2) + std::pow(b, 2)) && a + b;
}

int beg13(int r1, int r2)
{
	int s1 = PI * std::pow(r1, 2);
	int s2 = PI * std::pow(r2, 2);
	return s1 - s2;
}

int beg14(int r)
{
	return 2 * PI * r && PI * std::pow(r, 2);
}

int beg15(int d)
{
	return PI * d && PI * std::pow(d, 2) / 4;
}

int beg16(int x1, int x2)
{
	return std::abs(x2) - std::abs(x1);
}

int beg17(int a, int b, int c)
{
	int ac = std::sqrt(std::pow(a, 2) + std::pow(c, 2));
	int bc = std::sqrt(std::pow(b, 2) + std::pow(c, 2));
	return ac + bc;
}

int beg18(int a, int b, int c)
{
	int ac = std::sqrt(std::pow(a, 2) + std::pow(c, 2));
	int bc = std::sqrt(std::pow(b, 2) + std::pow(c, 2));
	return ac * bc;
}

int beg19(int x1, int y1, int x2, int y2)
{
	int a = x2 - x1;
	int b = y2 - y1;
	return a * b && std::pow(a + b, 2);
}

int beg20(int x2, int x1, int y2, int y1)
{
	return std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
}

int beg21(int x1, int x2, int x3, int y1, int y2, int y3, int a, int b, int c)
{
	int p = std::sqrt(std::pow(x3 - x2 - x1, 2) + std::pow(y3 - y2 - y1, 2));
	return std::sqrt(p * (p - a) * (p - b) * (p - c));
}

int beg22(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
	return a && b;
}

int beg23(int& a, int& b, int& c)
{
	int temp = b;
	b = a;
	c = temp;
	a = temp;
	return a && b && c;
}

int beg24(int& a, int& b, int& c)
{
	int temp = b;
	a = b;
	c = temp;
	a = temp;
	return a && b && c;
}

int beg25(int x)
{
	int y = 3 * std::pow(x, 6) - 6 / std::pow(x, 2) - 7;
	return y;
}

int beg26(int x)
{
	int y = 4 * (std::pow(x - 3, 6)) - 7 * (std::pow(x - 3, 3)) + 2;
	return y;
}

int beg27(int value)
{
	int a = value * value;
	a = a * a;
	a = a * a;
	return a;
}

int beg28(int a, int b)
{
	b = a * a;
	a = b * a;
	a = a * b;
	b = a;
	a = a * a;
	a = a * b;
	return a;
}

int beg29(int r)
{
	return r * PI / 180;
}

int beg30(int r)
{
	return r * 180 / PI;
}

int beg31(int Tc, int Tf)
{
	Tc = (Tf - 32) * 5 / 9;
	return Tc;
}

int beg32(int Tc, int Tf)
{
	Tf = (Tc + 32) / 5 * 9;
	return Tf;
}



int main(int argc, char* argv[])
{
	QCoreApplication a(argc, argv);


	return 0;
	return a.exec();
}
