#include<iostream>
#include<stdlib.h>

using std::cout;
using std::endl;

template<typename T>
void swap(T& left, T& right)
{
	T tmp = left;
	left = right;
	right = tmp;
}

int main()
{
	int a = 0;
	int b = 1;
	swap(a, b);
	cout << a << endl;
	cout << b << endl;

	double c = 0.1;
	double d = 0.2;
	swap(c, d);
	cout << c << endl;
	cout << d << endl;
	system("pause");
}

//using std::cout;
//using std::endl;
//
//void swap(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//void swap(double& a, double& b)
//{
//	double tmp = a;
//	a = b;
//	b = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 1;
//	swap(a, b);
//	cout << a << endl;
//	cout << b << endl;
//
//	double c = 0.1;
//	double d = 0.2;
//	swap(c, d);
//	cout << c << endl;
//	cout << d << endl;
//	system("pause");
//}