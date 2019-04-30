#include<iostream>
#include<stdlib.h>

#include<iostream>
#include<stdlib.h>

using std::cout;
using std::endl;

int& Add(int a,int b)
{
	int c = a + b;
	return c;
}

int main()
{
	int& ret = Add(1, 2);
	Add(2, 2);
	cout << "ret=" << ret << endl;
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
//int main()
//{
//	int a = 1;
//	int b = 2;
//	swap(a, b);
//	cout << "a=" << a << endl << "b=" << b << endl;
//	system("pause");
//}

//using std::cout;
//using std::endl;
//
//int main()
//{
//	const int a = 1;
//	//int& b = a;a是常量,所以不能再改动,必须要声明b也是常量
//	const int& b = a;
//	const int& c = 10;
//	system("pause");
//}


//using std::cout;
//using std::endl;
//
//int main()
//{
//	int a = 1;
//	int d = 2;
//	//int& b;因为没有初始化,所以该条语句编译的时候会报错
//	int& b = a;
//	int& c = a;//一个变量可以有多个引用
//	//int& c = d;引用一旦引用一个实体，再不能引用其他实体,所以该条语句编译的时候会报错
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//	system("pause");
//}

//using std::cout;
//using std::endl;
//
//int Add(int a, int b)
//{
//	return a + b;
//}
//
//double Add(int a, double b)
//{
//	return a + b;
//}
//
//int main()
//{
//	cout << Add(1, 1) << endl;
//	cout << Add(1, 1.0) << endl;
//	system("pause");
//}

//int Add(int a, int b);
//
//int main()
//{
//	Add(1,1);
//}

//using std::cout;
//using std::endl;
//
//#define ADD(a,b) a+b
//
//int main()
//{
//	int c = ADD(1, 2) * 2;
//	cout << c << endl;
//	system("pause");
//}

//using std::cout;
//using std::endl;
//
//int Add1(int a, int b)
//{
//	return a + b;
//}
//
//inline int Add2(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	cout << Add1(1, 1) << endl;
//	cout << Add2(2, 2) << endl;
//	system("pause");
//}

//void Func(int a,int b=1,int c=0)
//{
//	c = a + b + c;
//	cout << c << endl;
//}
//
//int main()
//{
//	Func(3);
//	system("pause");
//}

//int main()
//{
//	char c = getchar(); //C语言输入
//	putchar(c);			//C语言输出
//	printf(" helle\n");  //C语言输出
//
//	int a;
//	cin >> a;			//C++输入
//	cout << a <<" "<<"hello"<< endl;	//C++输出
//	system("pause");
//}

//using std::cout;
//using std::endl;
//namespace wyd
//{
//	int b = 1;
//	int Sub(int a,int b)
//	{
//		return a - b;
//	}
//}
//
//using namespace wyd;
//
//int main()
//{
//	printf("%d,%d",b,Sub(3,0));
//	system("pause");
//}