#include <QCoreApplication>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <ctime>

int if01 (int a)
{
    if (a > 0)
    {
       a = a + 1;
    }
    else
    {
        a = a;
    }
    return a;
}

int if2(int a)
{

    if(a > 0)
    {
        return a + 1;
    }
    return a - 2;
}

int if3(int a)
{
    if(a > 0)
    {
        return a + 1;
    }
    else if (a == 0)
    {
        return 10;
    }
    else
    {
        return a - 2;
    }
}

void if4(int a, int b,int c)
{
    int temp = 0;
    if(a > 0)
    {
        temp = temp + 1;
    }
    if(b > 0)
    {
        temp = temp + 1;
    }
    if(c > 0)
    {
        temp = temp + 1;
    }
    std::cout<< temp << std::endl;
}

void if05 (int a, int b, int c)
{
    int pl = 0;
    int mn = 0;
    if (a > 0)
    {
        ++pl;
    }
    else
    {
        ++mn;
    }
    if (b > 0)
    {
        ++pl;
    }
    else
    {
        ++mn;
    }
    if (c > 0)
    {
        ++pl;
    }
    else
    {
        ++mn;
    }
    std::cout<<"positive"<<pl<<" "<<"negative"<<mn<<std::endl;
}

int if06 (int a, int b)
{
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

void if07 (int a, int b)
{
    if (a > b)
    {
        std::cout<<"1"<<std::endl;
    }
    else
    {
        std::cout<<"2"<<std::endl;
    }
}

void if08 (int a, int b)
{
    if (a > b)
    {
        std::cout<<a<<" "<<b<<std::endl;
    }
    else
    {
        std::cout<<b<<" "<<a<<std::endl;
    }
}

void if09 (double a, double b)
{
    if (a > b)
    {
        std::swap(a, b);
        std::cout << a << " " << b << std::endl;
    }
    else
    {
        std::cout << a << " " << b << std::endl;
    }
}

void if10 (int a, int b)
{
    if (a != b)

    {
        a = a + b;
        b = a + b;
    }
    std::cout<<a<<" "<<b<<std::endl;
}

void if11 (int a, int b)
{
    if(a != b)
    {
        if(a > b)
        {
            b = a;
        }
        else
        {
            a = b;
        }
    }
    else
    {
        a = 0;
        b = 0;
    }
    std::cout << a << " " << b << std::endl;
}

int if12(int a, int b, int c)
{
    int temp = 0;
    temp = std::min(a,b);
    if (temp < c)
    {
        return temp;
    }
    else
    {
        return c;
    }
}

int if13(int a, int b, int c)
{
    if (a < b && b < c)
    {
        return b;
    }
    if (c < a && a < b)
    {
        return a;
    }
    if (a < c && c < b)
    {
        return c;
    }
}

void if14 (int a, int b, int c)
{
    if (a<b && b<c)
    {
        std::cout<<c<<" "<<a<<std::endl;
    }
    if (c<a && a<b)
    {
        std::cout<< b << " "<<c<<std::endl;
    }
    if (a<c && c<b)
    {
        std::cout<<b<< " "<<a<<std::endl;
    }
}

void if16(int a, int b, int c)
{
    if (a < b && b < c)
    {
        a = a * a;
        b = b * b;
        c = c * c;
        std::cout << a << " " << b << " " << c << std::endl;
    }
    else
    {
        a = -a;
        b = -b;
        c = -c;
        std::cout << a << " " << b << " " << c << std::endl;
    }
}

void if17 (double a, double b, double c)
{
    if (((a > b) && (b > c)) || ((c > b) && (b > a)))
    {
        a = a * 2;
        b = b * 2;
        c = c * 2;
    }
    else
    {
        a = -a;
        b = -b;
        c = -c;
    }
    std::cout << a << " " << b << " " << c << std::endl;
}

int if18 (int a, int b, int c)
{
    if((a == b) && (b == c))
    {
        return 0;
    }
    if(a == b)
    {
        std::cout << 3 << std::endl;
    }
    if(a == c)
    {
        std::cout << 2 << std::endl;
    }
    if(b == c)
    {
        std::cout << 1 << std::endl;
    }
}


int if19(int a, int b, int c, int e)
{
    if(a == b && b == c && c == e)
    {
        return 0;
    }
    if(a == b && b == c)
    {
        std::cout << 4 << " ";
    }

    if(a == b && b == e)
    {
        std::cout << 3 << " ";
    }

    if(a == c && c == e)
    {
        std::cout << 2 << " ";
    }
    if(b == c && c == e)
    {
        std::cout << 1 << " ";
    }
}

void if20(int a, int b, int c)
{
    int d_b = a - b;
    int d_c = a - c;
    if(d_b < 0)
    {
        d_b = d_b * (-1);
    }
    if(d_c < 0)
    {
        d_c = d_c * (-1);
    }
    if(d_b > d_c)
    {
        std::cout << "c = " << d_c <<" "<< std::endl;
    }
    else
    {
        std::cout << "b = " << d_b <<" "<< std::endl;
    }
}

int if21(int x, int y)
{
    if (x == 0 && y == 0)
    {
        std::cout<< " 0 ";
        return 0;
    }
    if (x == 0 && y != 0)
    {
        std::cout<< "1";
        return 0;
    }
    if (y == 0 && x != 0)
    {
        std::cout<< "2";
        return 0;
    }
    if (x != 0 || y != 0)
    {
        std::cout<< "3";
        return 0;
    }
}

void if22(int x, int y)
{
    if(x > 0 && y > 0)
    {
        std::cout<<"1"<<std::endl;
    }
    if(x < 0 && y > 0)
    {
        std::cout<<"2"<<std::endl;
    }
    if(x < 0 && y < 0)
    {
        std::cout<<"3"<<std::endl;
    }
    if(x > 0 && y < 0)
    {
        std::cout<<"4"<<std::endl;
    }
}

void if23(int x1, int y1, int x2, int y2, int x3, int y3)
{
    int x4, y4;
    if(x2 == x1)
    {
        x4 = x3;
    }
    else
    {
        x4 = x1;
    }
    if(y1 == y2)
    {
        y4 = y3;
    }
    else
    {
        y4 = y1;
    }
    std::cout << " x = " << x4 << std::endl
              << " y = " << y4 << std::endl;
}

void if24(double x)
{
    double f = 0;
    if(x > 0)
    {
        f = 2 * sin(x);
    }
    if( x <= 0)
    {
        f = 6 - x;
    }
    std::cout << f;
}

void if25(int x)
{
    int fx;
    if (x < -2 || x > 2)
    {
        fx = 2 * x;
    }
    else
    {
        fx = -3 * x;
    }
    std::cout<<fx<<std::endl;
}

void if26(double x)
{
    double fx = 0;
    if( x <= 0)
    {
        fx = -x;
    }
    if( 0 < x && x < 2)
    {
        fx = x * x;
    }
    if( x >= 2)
    {
        fx = 4;
    }
    std::cout<<fx<<std::endl;
}

void if27(double x)
{
    double fx;
    if(x < 0)
    {
        fx = 0;
        std::cout<<fx;
    }
    if ((int)x % 2 == 0)
    {
        fx = 1;
    }
    else
    {
        fx = -1;
    }
    std::cout<<fx<<std::endl;
}

void if28 (int x)
{
    if(x != 0)
    {
        std::cout<<"365"<<std::endl;
        if(x % 4 == 0)
        {
            std::cout<<"366"<<std::endl;
        }
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    return 0;
    return a.exec();
}
