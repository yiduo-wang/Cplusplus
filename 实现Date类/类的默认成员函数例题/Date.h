#pragma once

#include<iostream>
#include<stdlib.h>

using std::cout;
using std::endl;

class Date
{
public:
	inline int GetMonthDay(int year, int month)//ȡһ���·��ж�����
	{
		static int MonthArray[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		if (month == 2)
		{
			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
				return 29;
		}
		return MonthArray[month];
	}

	Date(int year, int month, int day);//���캯��

	~Date();//��������
	Date(const Date& d);//�������캯��

	Date& operator=(const Date& d);
	Date& operator++();//ǰ��++
	Date operator++(int);//����++
	Date& operator--();//ǰ��--
	Date& operator--(int);//����--
	Date operator+(int day)const;
	Date operator-(int day)const;
	Date& operator+=(int day);
	Date& operator-=(int day);
	int operator-(Date& d);

	bool operator==(const Date& d)const;
	bool operator<(const Date& d)const;
	bool operator<=(const Date& d)const;
	bool operator>(const Date& d)const;
	bool operator>=(const Date& d)const;
	bool operator!=(const Date& d)const;

	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};