#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>

using std::cout;
using std::endl;

class Date
{
public:

	void print()
	{
		cout << "print()" << endl;
	}

	void print() const
	{
		cout << "print() const" << endl;
		Date d1;
		d1.print();
	}
private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1;
	d1.print();

	const Date d2;
	d2.print();
	system("pause");
}


//using std::cout;
//using std::endl;
//
//class string
//{
//public:
//	string(const char* string = "hello world")
//	{
//		_str = (char*)malloc(strlen(string) + 1);
//		strcpy(_str, string);
//	}
//
//	void print()
//	{
//		cout <<_str<< endl;
//	}
//
//	~string()
//	{
//		free(_str);
//		_str = NULL;
//	}
//	/*
//	如果没有自己传建一个深拷贝的赋值运算符重载,程序就会崩溃
//	string& operator=(const string& str1)
//	{
//		_str = (char*)malloc(strlen(str1._str) + 1);
//		strcpy(_str, str1._str);
//		return *this;
//	}
//	*/
//private:
//	char* _str;
//};
//
//int main()
//{
//	string str1("hello");
//	string str2;
//	str2 = str1;
//	str2.print();
//	system("pause");
//}

//using std::cout;
//using std::endl;
//
//class Date
//{
//public:
//	Date(int year = 1990, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//	
//	Date& operator=(const Date& d1)
//	{
//		this->_year = d1._year;
//		this->_month = d1._month;
//		this->_day = d1._day;
//		return *this;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2019, 5, 14);
//	Date d2;
//	d2 = d1;
//	d2.print();
//	system("pause");
//}

//using std::cout;
//using std::endl;
//
//class Date
//{
//public:
//	Date(int year = 1990, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//	bool operator==(const Date& d2)
//	{
//		return this->_year == d2._year
//			&& this->_month == d2._month
//			&& this->_day == d2._day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2019, 5, 14);
//	Date d2;
//	cout << (d1 == d2) << endl;
//	system("pause");
//}

//using std::cout;
//using std::endl;
//
//class Date
//{
//public:
//	Date(int year=1990,int month=1,int day=1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//	int _year;
//	int _month;
//	int _day;
//};
//
////全局operator,类的成员变量必须是共有的
//bool operator==(const Date& d1,const Date& d2)
//{
//	return d1._year == d2._year
//		&& d1._month == d2._month
//		&& d1._day == d2._day;
//}
//
//int main()
//{
//	Date d1(2019, 5, 14);
//	Date d2;
//	cout << (d1 == d2) << endl;
//	system("pause");
//}

//using std::cout;
//using std::endl;
//
//class string
//{
//public:
//	string(const char* str = "hello world")
//	{
//		_str = (char*)malloc(strlen(str) + 1);
//		strcpy(_str, str);
//	}
//
//	~string()
//	{
//		free(_str);
//		_str = null;
//	}
//	string(const string& str)
//	{
//		_str = (char*)malloc(strlen(str._str) + 1);
//		strcpy(_str, str._str);
//	}
//	void print()
//	{
//		cout << _str << endl;
//	}
//private:
//	char* _str;
//};
//
//int main()
//{
//	string str1("hello");
//	string str2 = str1;
//	str2.print();
//	system("pause");
//}

//using std::cout;
//using std::endl;
//
//class Date
//{
//public:
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(1900, 1, 1);
//	Date d2 = d1;
//	d2.Print();
//	system("pause");
//}

//using std::cout;
//using std::endl;
//
//class Date
//{
//public:
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(1900,1,1);
//	Date d2 = d1;
//	d2.Print();
//	system("pause");
//}

//#include<iostream>
//#include<stdlib.h>
//
//using std::cout;
//using std::endl;
//
//class string
//{
//public:
//	string(const char* string = "hello world")
//	{
//		_str = (char*)malloc(strlen(string) + 1);
//		strcpy(_str, string);
//	}
//	~string()
//	{
//		if (_str)
//		{
//			free(_str);
//			_str = NULL;
//		}
//		cout << "string()" << endl;
//	}
//private:
//	char* _str;
//};
//
//class str
//{
//private:
//	string _str;
//	int _c;
//};
//
//int main()
//{
//	str s;
//	system("pause");
//}
//using std::cout;
//using std::endl;
//
//typedef int SLDateType;
//
//class SqList
//{
//public:
//	SqList(int capacity = 20)
//	{
//		_pdate = (SLDateType*)malloc(sizeof(capacity)*capacity);
//		_size = 0;
//		_capacity = capacity;
//	}
//	~SqList()
//	{
//		if (_pdate)
//		{
//			free(_pdate);
//			_pdate = NULL;
//			_size = 0;
//			_capacity = 0;
//		}
//	}
//private:
//	int* _pdate;
//	int _size;
//	int _capacity;
//};

//using std::cout;
//using std::endl;
//
//
//class Date
//{
//public:
//	Date()
//	{}
//	Date(int year = 1990, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	d1.Print();
//	system("pause");
//}

//using std::cout;
//using std::endl;
//
//class Date2
//{
//public:
//	Date2()
//	{
//		cout << "Date2()" << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//class Date1
//{
//public:
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//
//	Date2 d2;
//};
//
//int main()
//{
//	Date1 d1;
//	d1.Print();
//	system("pause");
//}

//using std::cout;
//using std::endl;
//
//class Date
//{
//public:
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	d1.Print();
//	//Date d1();
//	system("pause");
//}

//using std::cout;
//using std::endl;
//
//class Date
//{
//public:
//	Date()
//	{
//		cout << "无参构造函数" << endl;
//	}
//	Date(int year, int month, int day)
//	{
//		cout << "有参构造函数" << endl;
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	Date d2(1900, 1, 1);
//	d2.Print();
//	//Date d1();
//	system("pause");
//}

//using std :: cout;
//using std :: endl;
//
//class Date
//{
//public:
//	void SetDate(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	d1.Print();
//	d1.SetDate(1900, 1, 1);
//	d1.Print();
//	system("pause");
//}