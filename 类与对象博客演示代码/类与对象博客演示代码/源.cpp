#include<iostream>
#include<stdlib.h>

using std::cout;
using std::endl;

class date
{
public:
	void fonuc(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
		cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};


int main()
{
	date d1, d2;
	d1.fonuc(1998, 1, 1);
	d2.fonuc(2019, 5, 7);
	system("pause");
}

//using std::cout;
//using std::endl;
//
//class date
//{
//public:
//	void fonuc(int year,int month,int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << _year << "-" << _month << "-" << day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//int main()
//{
//	date d1, d2;
//	d1.fonuc(1998, 1, 1);
//	d2.fonuc(2019, 5, 7);
//	system("pause");
//}

//using std::cout;
//using std::endl;
//
//class a
//{
//public:
//	void founc()
//	{}
//};
//
//class b
//{
//public:
//	void fonuc()
//	{}
//private:
//	int _a;
//};
//
//class c{};
//
//int main()
//{
//	cout << sizeof(a) << endl << sizeof(b) << endl << sizeof(c) << endl;
//	system("pause");
//}

//using std::cout;
//using std::endl;
//
//struct date
//{
//	void Info(int year,int month,int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	date d1;
//	d1.Info(2019,5,7);
//	system("pause");
//}

//using std::cout;
//using std::endl;
//
//void f(int)
//{
//	cout << "f(int)" << endl;
//}
//
//void f(int*)
//{
//	cout << "f(int*)" << endl;
//}
//
//int main()
//{
//	f(0);
//	f(nullptr);
//	f((int*)NULL);
//	system("pause");
//}

//using std::cout;
//using std::endl;
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	for (auto a : arr)
//		cout << a << endl;
//	system("pause");
//}

//void Founc()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < size; ++i)
//		printf("%d", arr[i]);
//	for (int* p = arr; p < arr + size; ++p)
//		printf("%d", *p);
//}

//using std::cout;
//using std::endl;
//
//int main()
//{
//	auto a = 1, b = 2;
//	auto c = 'c', d = 5;//此时会报错
//	system("pause");
//}

//using std::cout;
//using std::endl;
//
//int main()
//{
//	int a = 1;
//	auto b = &a;
//	auto* c =&a;
//	auto& d = a;
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//
//	system("pause");
//}

//using std::cout;
//using std::endl;
//
//double Founc()
//{
//	return 4.0;
//}
//
//int main()
//{
//	int a = 1;
//	auto b = a;
//	auto c = 'a';
//	auto d = Founc();
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//	cout << d << endl;
//	system("pause");
//}