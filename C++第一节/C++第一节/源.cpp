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
//	//int& b = a;a�ǳ���,���Բ����ٸĶ�,����Ҫ����bҲ�ǳ���
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
//	//int& b;��Ϊû�г�ʼ��,���Ը����������ʱ��ᱨ��
//	int& b = a;
//	int& c = a;//һ�����������ж������
//	//int& c = d;����һ������һ��ʵ�壬�ٲ�����������ʵ��,���Ը����������ʱ��ᱨ��
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
//	char c = getchar(); //C��������
//	putchar(c);			//C�������
//	printf(" helle\n");  //C�������
//
//	int a;
//	cin >> a;			//C++����
//	cout << a <<" "<<"hello"<< endl;	//C++���
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