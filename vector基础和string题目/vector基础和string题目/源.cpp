#include<iostream>
#include<vector>
#include<stdlib.h>

using std::cout;
using std::endl;

//template<class T>
//class vector
//{
//
//private:
//	T* _arr;
//	size_t _size;
//	size_t _capacity;
//};

void test_vector1()//增删改查
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.erase(++v.begin());
	for (size_t i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;

	std::vector<int>::iterator pos = std::find(v.begin(), v.end(), 3);
	v.insert(pos, 6);
	for (auto a : v)
		cout << a << " ";
	cout << endl;

	std::vector<int> swap_v;
	swap_v.push_back(9);
	swap_v.push_back(9);
	swap_v.push_back(9);
	swap_v.push_back(9);
	swap_v.swap(v);
	cout<<"swap_v:" << endl;
	for (auto b : swap_v)
		cout << b << " ";
	cout << endl;
	cout << "v:" << endl;
	for (auto c : v)
		cout << c << " ";
	cout << endl;
}

void test_vector2()//基本定义
{
	std::vector<int> v;//只定义,不初始化
	std::vector<int>v1(5, 1);//定义并初始化为5个1
	std::vector<int>v2(v1.begin(), v1.end());
	//使用迭代器进行初始化构造
	std::vector<int>v3(v2);//拷贝构造
	//迭代器初始化
	int arr[] = { 1,2,3 };
	std::vector<int> v4(arr, arr + sizeof(arr) / sizeof(int));
	for (auto it = v4.begin(); it != v4.end(); ++it)
		cout << *it << " ";
	cout << endl;
}

void test_vector3()//迭代器
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	std::vector<int>::iterator it1 = v.begin();//正向迭代器
	while (it1 != v.end())
	{
		cout << *it1 << " ";
		++it1;
	}
	cout << endl;

	//反向迭代器
	std::vector<int>::reverse_iterator it2 = v.rbegin();
	while (it2 != v.rend())
	{
		cout << *it2 << " ";
		++it2;
	}
	cout << endl;

	//const正向迭代器
	std::vector<int>::const_iterator it3 = v.cbegin();
	while (it3 != v.cend())
	{
		cout << *it3 << " ";
		++it3;
	}
	cout << endl;
}

void test_vector4()//空间问题
{
	//VS下的容量变化情况
	std::vector<int> v;
	auto sz = v.capacity();
	cout << "making v grow:" << endl;
	for (int i = 0; i < 100; ++i)
	{
		v.push_back(i);
		if (sz != v.capacity())
		{
			sz = v.capacity();
			cout << "capacity changed:" << sz << endl;
		}
	}

	//reserve
	std::vector<int> v1;
	auto a = v1.capacity();
	v1.reserve(100);
	cout << "\nreserve making v1 grow:" << endl;
	for (int i = 0; i < 100; ++i)
	{
		if (a != v1.capacity())
		{
			a = v1.capacity();
			cout << "capacity changed:" << a << endl;
		}
	}

	//resize
	std::vector<int>v2;
	for (int i = 1; i < 10; ++i)
		v2.push_back(i);
	v2.resize(5);
	v2.resize(8,100);
	v2.resize(12);
	cout << "\nv2 contains:";
	for (int i = 0; i < v2.size(); ++i)
		cout << ' ' << v2[i];
	cout << endl;
}

void test_vector5()//迭代器失效
{
	//erase
	int arr[] = { 1,2,3,4 };
	auto sz = sizeof(arr) / sizeof(int);
	std::vector<int> v(arr, arr + sz);
	std::vector<int>::iterator pos = find(v.begin(), v.end(), 3);
	v.erase(pos);
	cout << *pos << endl;//erase释放空间后,pos相当于野指针

	//insert
	//insert后可能会导致增容,增容之前的空间会被释放掉
	//这时再利用迭代器访问it相当于访问野指针
}

int main()
{
	test_vector5();
	system("pause");
}