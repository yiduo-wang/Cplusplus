#include"Date.h"
#include<stdlib.h>

Date::Date(int year, int month, int day)
{
	if (year >= 1900 && month > 0 && month < 13
		&& day>0 && day <= GetMonthDay(year, month))
	{
		_year = year;
		_month = month;
		_day = day;
	}
	else
		cout << "非法日期" << endl;
}

Date::~Date()
{
	_year = 0;
	_month = 0;
	_day = 0;
}

Date::Date(const Date& d)
{
	this->_year = d._year;
	this->_month = d._month;
	this->_day = d._day;
}

Date& Date::operator=(const Date& d)
{
	this->_year = d._year;
	this->_month = d._month;
	this->_day = d._day;
	return *this;
}

Date& Date::operator+=(int day)
{
	if (day < 0)
		return *this -= -day;
	this->_day += day;
	while (this->_day > GetMonthDay(this->_year, this->_month))
	{
		this->_day -= GetMonthDay(this->_year, this->_month);
		if (this->_month == 12)
		{
			this->_month = 1;
			++this->_year;
		}
		else
			++this->_month;
	}
	return *this;
}

Date Date:: operator+(int day)const
{
	Date ret = *this;
	ret += day;
	return ret;
}

Date& Date::operator++()
{
	*this += 1;
	return *this;
}

Date Date:: operator++(int)
{
	Date ret = *this;
	*this += 1;
	return ret;
}

Date& Date::operator-=(int day)
{
	if (day < 0)
		return *this += -day;
	this->_day -= day;
	while (this->_day <= 0)
	{
		--this->_month;
		if (this->_month == 0)
		{
			--this->_year;
			this->_month = 12;
		}
		this->_day+=GetMonthDay(this->_year, this->_month);
	}
	return *this;
}

Date Date::operator-(int day)const
{
	Date ret = *this;
	ret -= day;
	return ret;
}

Date& Date::operator--()
{
	*this -= 1;
	return *this;
}

Date& Date::operator--(int)
{
	Date ret = *this;
	*this -= 1;
	return ret;
}

int Date::operator-(const Date& d)const
{
	Date max = *this;
	Date min = d;
	int flag = 1;
	if (*this < d)
	{
		flag = -1;
		max = d;
		min = *this;
	}
	int count = 0;
	while (min!=max)
	{
		min += 1;
		++count;
	}
	return count * flag;
}

bool Date::operator==(const Date& d)const
{
	return this->_year == d._year && this->_month == d._month
		&& this->_day == d._day;
}

bool Date::operator<(const Date& d)const
{
	if (this->_year < d._year)
		return true;
	if (this->_year == d._year)
	{
		if (this->_month < d._month)
			return true;
		if (this->_month == d._month)
		{
			if (this->_day < d._day)
				return true;
		}
	}
	return false;
}

bool Date::operator<=(const Date& d)const
{
	if ((Date::operator<(d)) && (Date::operator==(d)))
		return true;
	return false;
}

bool Date::operator>(const Date& d)const
{
	if(Date::operator<=(d))
		return false;
	return true;
}

bool Date::operator>=(const Date& d)const
{
	if(Date::operator<(d))
		return false;
	return true;
}

bool Date::operator!=(const Date& d)const
{
	if(Date::operator==(d))
		return false;
	return true;
}