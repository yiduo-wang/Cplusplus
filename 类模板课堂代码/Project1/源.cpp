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

////C++����
//template<class T>
////����:Sqlist<T>
////����:Seqlist
//class Seqlist
//{
//public:
//	Seqlist()//���캯��
//	{
//		_arr = new T[10];
//		_size = 0;
//		_capacity = 0;
//	}
//	~Seqlist();//��������
//	Seqlist(const Seqlist<T>& s);//��������
//	Seqlist<T>& operator=(const Seqlist<T>& s);//��ֵ���������
//	size_t Size()
//	{
//		return _size;
//	}
//
//	void PushBack(const T& x)//ģ�御�������ú���const
//	{
//		//if (size >= _capacity)
//		//{
//		//	//����
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
////�����涨���Ա����,�������������
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
//	//s1,s2����ͬһ����Ķ���,������ͬһ����ģ���
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
	Seqlist()//���캯��
	{
		_arr = new T[10];
		_size = 0;
		_capacity = 0;
	}
	~Seqlist()//��������
	{
		delete[] _arr;
	}
	Seqlist(const Seqlist<T>& data)//��������
	{
		_arr = data._arr;
		_size = data._size;
		_capacity = data._capacity;
	}
	Seqlist<T>& operator=(const Seqlist<T>& data)//��ֵ���������
	{
		_arr = data._arr;
		_size = data.size;
		_capacity = data._capacity;
	}
	void PushBack(const T& data)//β��
	{
		//��������������
		_arr[_size] = data;
		_size++;
	}
	void PopBack()//βɾ
	{
		if (_size > 0)
			--_size;
	}
	void Print()//��ӡ
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