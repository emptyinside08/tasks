#include <QCoreApplication>
#include <iostream>
#include <cmath>
#include <ctime>
#include <algorithm>

int integ01(int l)
{
	return l / 100;
}

int integ02(int m)
{
	return m / 1000;
}

int integ03(int byte)
{
	return byte / 1024;
}

int integ04(int a, int b)
{
	return a / b;
}

int integ05(int a, int b)
{
	return a % b;
}

void integ06(int a)
{
	int A = a / 10;
	int B = a % 10;
	std::cout << A << " " << B << std::endl;
	std::cout << std::endl;
}

void integ07(int a)
{
	int A = a / 10;
	int B = a % 10;
	std::cout << A + B << " " << A * B << std::endl;
	std::cout << std::endl;
}

void integ08(int num)
{
	int A = num / 10;
	int B = num % 10;
	std::cout << B << A << std::endl;
	std::cout << std::endl;
}

void integ09(int num)
{
	num = num / 100;
	std::cout << num << std::endl;
	std::cout << std::endl;
}

void integ10(int num)
{
	int A = num % 10;
	int B = num / 100;
	std::cout << A << " " << B << std::endl;
	std::cout << std::endl;
}

void integ13(int a)
{
	int first = a / 100;
	std::cout << a << first << std::endl;
}

void integ14(int a)
{
	int last = a % 10;
	std::cout << last << a << std::endl;
}

void integ15(int a)
{
	int b = a / 100;
	int c = (a / 10) % 10;
	int d = a % 10;
	std::cout << c << b << d;
}

void integ16(int a)
{
	int b = a / 100;
	int c = (a / 10) % 10;
	int d = a % 10;
	std::cout << b << d << c;
}

int integ17(int first)
{
	int second = first / 100;
	int third = second % 10;
	return third;
}

int integ18(int value)
{
	int first = value / 1000;
	int second = first % 10;
	return second;
}

int integ19(int value)
{
	int min = value / 60;
	return min;
}

int integ20(int value)
{
	int temp = value / 3600;
	return temp;
}

int integ21(int value)
{
	return value % 60;
}

int integ22(int a)
{
	return ((a / 60) % 60) * 60;
}

int integ23(int a)
{
	return (a / 60) % 60;
}

int integ24(int a)
{
	return a % 7;
}

int integ25(int a)
{
	return (a + 3) % 7;
}

int integ26(int a)
{
	return (a + 1) % 7;
}

int integ27(int a)
{
	return (a + 5) % 7;
}

int integ28(int a, int b)
{
	return (a + b) % 7;
}

int integ30(int a)
{
	return (a - 1) / 100 + 1;
}


int main(int argc, char* argv[])
{
	QCoreApplication a(argc, argv);


	return 0;
	return a.exec();
}
