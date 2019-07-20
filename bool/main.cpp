#include <QCoreApplication>
#include <iostream>
#include <cmath>

bool b01(int a)
{
    return a > 0;
}


bool b02(int a)

{
    return a % 2 != 0;
}


bool b03(int a)
{
    return a % 2 != 0;
}


bool b04(int a, int b)
{
    return a > 2 && b <= 3;
}


bool b05(int a, int b)
{
    return a >= 0 || b < -2;
}


bool b06(int a, int b, int c)
{
    return a < b && b < c;
}


template <class T>
bool b07(T a, T b, T c)
{
    return a < b && b < c;
}


bool b08(int a, int b)
{
    return a % 2 != 0 && b % 2 != 0;
}


bool b09(int a, int b)
{
    return a || b > 0;
}


bool b10(int a, int b)
{
    return a % 2 != 0 ^ b % 2 != 0;
}



template <class T>
bool b11(int a, int b)
{
    return a % 7 == 0 && b % 7 == 0;
}



bool b12(int a, int b, int c)
{
    return a > 0 && b > 0 && c > 0;
}


bool b13(int a, int b, int c)
{
    return a > 0 || b > 0 || c > 0;
}


bool b14(int a, int b, int c)
{
    return a > 0 ^ b > 0 ^ c > 0;
}


bool b15(int a, int b, int c)
{
    return a > 0 && b > 0 ^ c > 0;
}


bool b16(int a)
{
    return a % 2 == 0 && a > 9 && a < 100;
}


bool b17(int a)
{
    return a % 2 != 0 && a > 99 && a < 1000;
}


bool b18(int a, int b, int c)
{
    return a == b || b == c || a == c;
}


bool b19(int a, int b, int c)
{
    return a == -b || b == -c || a == -c;
}


bool b20(int a)
{
    int b = a % 10;
    int c = (a / 10) % 10;
    int d = (a / 100);
    return b != c && c != d;
}


bool b21(int value)
{
    int a = value % 10;
    int b = (value / 10) % 10;
    int c = (value / 100);
    return c > b && b > a;
}


bool b22(int value)
{
    int a = value % 10;
    int b = (value / 10) % 10;
    int c = (value / 100);
    return c > b && b > a || c < b && b < a;
}


bool b25 (int a, int b)
{
    return a < 0 && b > 0;
}


bool b26 (int a, int b)
{
    return a > 0 && b < 0;
}


bool b27 (int a, int b)
{
    return (a < 0 && b > 0) || (a < 0 && b < 0);
}


bool b28 (int a, int b)
{
    return (a > 0 && b > 0) || (a < 0 && b < 0);
}


bool b30 (int a, int b, int c)
{
    return a == b && b == c;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return 0;
    return a.exec();
}
