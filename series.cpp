#include <QCoreApplication>
#include <iostream>

int ser01(int* arr, int size)
{
	int temp = 0;
	for (int i = 0; i != size; ++i)
	{
		temp += arr[i];
	}
	return temp;
}

int ser02(int* arr, int size)
{
	int temp = 1;
	for (int i = 0; i != size; ++i)
	{
		temp *= arr[i];
	}
	return temp;
}

int ser03(int* arr, int size)
{
	int temp = 0;
	for (int i = 0; i != size; ++i)
	{
		temp += arr[i];
	}
	return temp / size;
}

void ser04(int* arr, int size)
{
	int temp = 0;
	int temp1 = 1;
	for (int i = 0; i != size; ++i)
	{
		temp += arr[i];
		temp1 *= arr[i];
	}
	std::cout << temp << " " << temp1 << std::endl;
}

void ser05(double* arr1, int size)
{
	int temp = 0;
	for (int i = 0; i != size; ++i)
	{
		int a = (int)arr1[i];
		std::cout << a << std::endl;
		temp += a;
	}
	std::cout << temp << std::endl;
}

void ser06(double* arr1, int size)
{
	int temp = 1;
	for (int i = 0; i != size; ++i)
	{
		double a = arr1[i] * 10;
		int b = (int)a;
		std::cout << b % 10 << std::endl;
		temp *= b % 10;
	}
	std::cout << temp << std::endl;
}



int main(int argc, char* argv[])
{
	QCoreApplication a(argc, argv);

	int arr[10]{ 1,2,3,4,5,6,7,8,9,10 };
	double arr1[4]{ 1.2, 3.4, 5.6, 7.1 };

	return 0;
	return a.exec();
}
