#include<iostream>
#include<stdlib.h>

using namespace std;
typedef int DataType;

//C++
//class Seqlist
//{
//public:
//	void PuchBack(DataType x);
//	void PopBack();
//private:
//	DataType* _arr;
//	size_t _size;
//	size_t _capacity;
//};

////C++泛型
//template<class T>
////类型:Sqlist<T>
////类名:Seqlist
//class Seqlist
//{
//public:
//	Seqlist()//构造函数
//	{
//		_arr = new T[10];
//		_size = 0;
//		_capacity = 0;
//	}
//	~Seqlist();//析构函数
//	Seqlist(const Seqlist<T>& s);//拷贝构造
//	Seqlist<T>& operator=(const Seqlist<T>& s);//赋值运算符重载
//	size_t Size()
//	{
//		return _size;
//	}
//
//	void PushBack(const T& x)//模板尽量传引用和用const
//	{
//		//if (size >= _capacity)
//		//{
//		//	//增容
//		//}
//		_arr[_size] = x;
//		++_size;
//	}
//	void Popback()
//	{
//		if (_size > 0)
//		{
//			--_size;
//		}
//	}
//	T operator[](size_t index)
//	{
//		return _arr[index];
//	}
//	void Print()
//	{
//		for (size_t i=0;i<_size;++i)
//		{
//			cout << _arr[i] << " ";
//		}
//		cout << endl;
//	}
//private:
//	T* _arr;
//	size_t _size;
//	size_t _capacity;
//};
//
////类外面定义成员函数,定义和声明分离
//template<class T>
//Seqlist<T>::~Seqlist()
//{
//	delete[] _arr;
//}
//
//
//struct Node
//{};
//
//int main()
//{
//	Seqlist <int>s1;//int
//	//Seqlist <Node*>s2;//Node*
//	//s1,s2不是同一个类的对象,但是是同一个类模板的
//	s1.PushBack(1);
//	s1.PushBack(2);
//	s1.PushBack(3);
//	//s1.Print();
//	for (size_t i = 0; i < s1.Size(); ++i)
//	{
//		cout << s1[i] << " ";
//		cout << s1.operator[](i) << " ";
//	}
//	cout << endl;
//	system("pause");
//}
//template<class T>
//void Swap(T& left,T& right)
//{
//	T tmp = left;
//	left = right
//	right = tmp;
//}

template <class T>
class Seqlist
{
public:
	Seqlist()//构造函数
	{
		_arr = new T[10];
		_size = 0;
		_capacity = 0;
	}
	~Seqlist()//析构函数
	{
		delete[] _arr;
	}
	Seqlist(const Seqlist<T>& data)//拷贝构造
	{
		_arr = data._arr;
		_size = data._size;
		_capacity = data._capacity;
	}
	Seqlist<T>& operator=(const Seqlist<T>& data)//赋值运算符重载
	{
		_arr = data._arr;
		_size = data.size;
		_capacity = data._capacity;
	}
	void PushBack(const T& data)//尾插
	{
		//不考虑增容问题
		_arr[_size] = data;
		_size++;
	}
	void PopBack()//尾删
	{
		if (_size > 0)
			--_size;
	}
	void Print()//打印
	{
		for (size_t i = 0; i < _size; ++i)
			cout << _arr[i]<<" ";
		cout << endl;
	}
private:
	T* _arr;
	size_t _size;
	size_t _capacity;
};

int main()
{
	Seqlist<int> s1;
	Seqlist<double>s2;
	s1.PushBack(1);
	s1.PushBack(2);
	s1.PushBack(3);
	s1.Print();
	s2.PushBack(1.1);
	s2.PushBack(2.2);
	s2.PushBack(3.3);
	s2.Print();
	system("pause");
}