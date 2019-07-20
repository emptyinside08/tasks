#include <QCoreApplication>
#include <iostream>


void for01(int n, int k)
{
    for(int i = 0; i != n; ++i)
    {
        std::cout<< k <<std::endl;
    }
}


void for02(int a, int b)
{
    int temp = 0;
    for(; a <= b; ++a)
    {
        std::cout << a << std::endl;
        ++temp;
    }
    std::cout << temp;
}


void for03(int a, int b)
{
    int temp = 0;
    for(; a != b; --b)
    {
        std::cout << b <<std::endl;
        ++temp;
    }
    std::cout << temp;
}


void for04(double num)
{
    for(int i = 1; i != 10; ++i)
    {
        std::cout<<i*num<<std::endl;
    }
}


void for05(double num)
{
    for(double i = 0.1; i <= 1; i += 0.1)
    {
        std::cout<<i*num<<std::endl;
    }
}


void for06(double num)
{
    for(double i = 1.2; i <= 2; i += 0.2)
    {
        std::cout<<i * num<<std::endl;
    }
}



int for07(int a, int b)
{
    int temp = 0;
    for(; a <= b; ++a)
    {
        temp += a;
    }
    return temp;
}


int for08(int a, int b)
{
    int temp = 1;
    for(; a <= b; ++a)
    {
        temp *= a;
    }
    return temp;
}



int for09(int a, int b)
{
    int temp = 0;
    for(; a <= b; ++a)
    {
        temp += pow(a,2);
    }
    return temp;
}


double for10(int n)
{
    int temp = 0;
    for(double i = 1; i <= n; ++i)
    {
        temp += 1/i;
    }
    return temp;
}


int for11(int n)
{
    int temp = 0;
    for(int i = 0; i != n; ++i)
    {
        temp += pow(n + i, 2);
    }
    return temp;
}


int for12(double n)
{
    double temp = 1;
    for(double i = 1.1; i <= n; i += 0.1)
    {
        temp *= i;
    }
    return temp;
}


double for13(double n)
{
    double temp = 0;
    for(double i = 1.0; i <= n; i += 0.1, temp *= -1)
    {
        temp = temp + i;
    }
    return temp;
}


void for14(int n)
{
    int temp = 0;
    for(int i = 1; i <= n; ++i)
    {
        temp += 2 * i - 1;
        std::cout << temp <<std::endl;
    }
}


double for15(double a, int n)
{
    double temp = 1;
    for(int i = 1; i <= n; ++i)
    {

        temp *=a;

    }
    return temp;
}


void for16(double a, int n)
{
    double temp = 1;
    for(int i = 0; i != n; ++i)
    {
        temp *= a;
        std::cout << temp << std::endl;
    }
}


int for17(double a, int n)
{
    int temp = 0;
    for(int i = 0; i != n; ++i)
    {
        temp += pow(a,i);
    }
    return temp;
}


double for18(double a, int n)
{
    double temp = 0;
    for(int i = 0; i != n; ++i, temp *= -1)
    {
        temp += pow(a,i);
    }
    return temp;
}



double for19(double value)
{
    double temp = 1;
    for(int i = 2; i <= value; ++i)
    {
        temp *= i;
    }
    return temp;
}


double for20(double value)
{
    double temp = 1;
    for(int i = 2; i <= value; ++i)
    {
        temp += temp * i;
    }
    return temp;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    return 0;
    return a.exec();
}
