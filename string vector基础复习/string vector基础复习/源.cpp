#include<iostream>
#include<string>
#include<stdlib.h>

using std::cout;
using std::endl;

void test_string()
{
	std::string s1;
	cout << s1 << endl;
	cout << s1.capacity() << endl;
	std::string s2("hello");
	cout << s2 << endl;
	cout << s2.size() << endl;
	std::string s3(10, 'q');
	cout << s3 << endl;
	std::string s4(s2,2);//从元素序号为2的元素开始拷贝构造
	cout << s4 << endl;
}

void test_string1()
{
	std::string s("hello");
	std::string w("rr");
	s.push_back('w');
	cout << s << endl;
	s.append(" world");
	cout << s << endl;
	s += '-';
	cout << s << endl;
	s += "dd";
	cout << s << endl;
	s += w;
	cout << s << endl;
}

void test_string2()
{
	//std::string s("hello");
	//cout << s << endl;
	//cout << s.size() << endl;
	//cout << s.capacity() << endl;
	//s.clear();
	//cout << s << endl;
	//cout << s.size() << endl;
	//cout << s.capacity() << endl;

	std::string s("hello");
	s.resize(11);
	cout << s << endl;
	cout << s.size() << endl;
	cout << s.capacity() << endl;
	s += '4';
	cout << s[8] << endl;

	//std::string s("hello");
	//s.reserve(10);
	//cout << s << endl;
	//cout << s.size() << endl;
	//cout << s.capacity() << endl;
	//cout<<s[8]<<endl;
}

void test_string3()
{
	std::string s1("hello");
	for (size_t i = 0; i < s1.size(); ++i)
	{
		cout << s1[i] << " ";
		cout << s1.at(i) << " ";
	}
	cout << endl;

	std::string::iterator it1 = s1.begin();
	while (it1 != s1.end())
	{
		cout << *it1 << " ";
		++it1;
	}
	cout << endl;

	std::string::reverse_iterator rit1 = s1.rbegin();
	while (rit1 != s1.rend())
	{
		cout << *rit1 << " ";
		++rit1;
	}
	cout << endl;

	const std::string s2("123456");
	std::string::const_iterator it2 = s2.begin();
	while (it2 != s2.end())
	{
		cout << *it2 << " ";
		++it2;
	}
	cout << endl;

	std::string::const_reverse_iterator rit2 = s2.rbegin();
	while (rit2 != s2.rend())
	{
		cout << *rit2 << " ";
		++rit2;
	}
	cout << endl;
}

void test_string4()
{
	std::string s("hel,o");
	s.insert(s.begin()+=2, '3');
	cout << s << endl;
	s.insert(6, ",world", 2);
	cout << s << endl;
	
	s.erase(++s.begin(), --s.end());
	cout << s << endl;
	
	std::string::iterator it1 = s.begin();
	while (it1 != s.end())
	{
		if (*it1 == ',')
			s.erase(it1);
		++it1;
	}
	cout << s << endl;

	std::string file1("helo,world.cpp.gz");
	size_t pos = file1.rfind(',');
	std::string suffix = file1.substr(pos);
	cout << suffix << endl;

	std::string url("http://www.cplusplus.com/2");
	auto start = url.find("://");
	start += 3;
	auto finish = url.find('/', start);
	cout << finish << endl;
	std::string address = url.substr(start, finish-start);
	cout << address << endl;
}

int main()
{
	std::string s;
	while (std::getline(std::cin, s))
	{
		auto pos = s.rfind(' ');
		if (pos != std::string::npos)
			cout << s.size() - pos - 1 << endl;
		else
			cout << s.size() << endl;
	}
	system("pause");
}