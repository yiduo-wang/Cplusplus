//=========================�����ռ�================================
//#include<stdio.h>
//namespace N//N�������ռ������
//{
//	int a;
//	int b;
//	void fun()
//	{
//		printf("N:fun()\n");
//	}
//
//	namespace NN
//	{
//		int a;
//		int b;
//		void fun()
//		{
//			printf("NN::fun()\n");//::�������޶���
//		}
//	}
//}
//
//int a;
//int b;
//void fun()
//{
//	printf("fun()\n");
//}
//
//namespace N
//{
//	int c;
//	double d;
//}
//
////using N::a;
////using namespace N;(��ò�Ҫʹ��)
//int main()
//{
//	N::a = 10;
//	N::b = 20;
//	a = 30;
//	N::fun();
//	N::NN::fun();
//	fun();
//	return 0;
//}
//=====================================================================//


//===========================C++�������===============================
//#include<iostream>
//#include<stdlib.h>
//
//int main()
//{
//	//int a = 10;
//	//printf("%d\n", a);
//
//	//std:: cout << a;
//
//	int a;
//	double d;
//	char c;
//	std::cin >> a >> d >> c;
//	std::cout << a <<std::endl<< d <<std::endl<< c<< std::endl;
//	system("pause");
//	//endl�൱�ڻ��з�
//}
//==================================================================//

//==============================ȱʡ����============================
//
//#include<iostream>
//#include<stdlib.h>
////using namespace std;
//
//
////��������������ȱʡֵ�м䲻���м��
////��:int funCPP2(int a=1;int b;int c=2)��ᱨ��
//
//
////ȱʡ��������ͬʱ�����������Ͷ�����
////��:����
//// int funCPP3(int a=10);
////����:
////int funCPP3(int a=10)��ᱨ��
//  {

//  }  
//int fun1(int a, int b)
//{
//	return a + b;
//}
//
////ȫȱʡ����
//int funCPP(int a = 100, int b = 200)
//{
//	return a + b;
//}
//
////��ȱʡ����
//int funCPP2(int a, int b, int c = 50)
//{
//	return a + b + c;
//}
//
//int main()
//{
//	std::cout<<fun1(2, 3)<<std::endl;
//	std::cout << funCPP() << std::endl;
//	//funCPP����ʵ����������ȱʡ����(100,200),����ʵ������ʵ��
//	std::cout << funCPP2(1, 2) << std::endl;
//	system("pause");
//}


////===============================��������=========================
////��������(ֻ�������б��й�):��������ͬ,�����б���ͬ(����,˳��,����)
////˳��ָ���ǲ������͵�˳����:char,int��Ϊint,char,�����������һ���򲻻�����
////��:int a,int b��Ϊint b,int a ������˳������Ч����
//
////C++�ĺ����ڵײ㲻���ǿ������������ֺ���
////���������˲����б�,���Ա�֤��ÿ��������Ψһ��,�Ӷ�����������
//#include<iostream>
//#include<stdlib.h>
//
//int add(int a, int b)
//{
//	return a + b;
//}
//
//double add(double a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	add(1,2);
//	system("pause");
//}

//==============================����==================================
//
#include<iostream>
#include<stdlib.h>
#include<time.h>
//using namespace std;
struct A
{
	int a[10000];
};
void Swap(int*a, int*b)
{
	int ret = *a;
	*a = *b;
	*b = ret;
}

void Swap(int& ra, int& rb)
{
	int ret = ra;
	 ra = rb;
	 rb = ret;
}

int& add(int a, int b)
{
	int c = a + b;
	return c;
}

void fun1(A a)
{

}

void fun2(A& a)
{

}

int main()
{
//	//int a = 10;
//	//int& ra = a;//��������:��������(��������+ȡ��ַ)+������=������
//	//���ú�ԭ��������һ���ڴ�,���ǵĵ�ַ��һ����
//	//std::cout << ra << std::endl;
//	//int b = 3;
//	//ra = b;//��ֵ֮��ra��aһ���
//	//std::cout << ra << std::endl;
//	//std::cout << a << std::endl;
//
//	
//	//������
//	//const int a = 1;
//	//const int& ra = a;//�����const,ֻ�ܶ�����д
//	//const int& ri = 1;
//
//	//float f = 3.4;
//	//float& rf = f;
//	////int& rrf=f;(����,�����const)
//	//const int& rrf = f;//(�൱�ڳ���������const int& rrf=3; )
//
//
//	//ʹ�ó���
//	//1.������
//	//int a = 3, b = 4;
//	//Swap(&a, &b);
//	//Swap(a, b);
//	//std::cout << a << " " << b << std::endl;
//
//	//2.������ֵ(����ֵ����������Ҫ���ں������������ڲ�Ȼ�����)
	int& ret = add(2,3);
	std::cout << "hello" << std::endl;
	std::cout << ret << std::endl;

//	//3.��ֵ,������Ч�ʱȽ�
//	//int n = 100000;
//	//A a;
//	//size_t begin1 = clock();
//	//for (int i = 0; i < n; ++i)
//	//	fun1(a);
//	//size_t end1 = clock();
//	//size_t begin2 = clock();
//	//for (int i = 0; i < n; ++i)
//	//	fun2(a);
//	//size_t end2 = clock();
//	//std::cout << (end1 - begin1) << std::endl;
//	//std::cout << (end2 - begin2) << std::endl;
//
//	//4.������ָ�������
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//
//	int& ra = a;
//	ra = 20;
//
	system("pause");
}

//================================��������=======================
//#include<iostream>
//#include<stdlib.h>
//
//int add(int a, int b)
//{
//	return a + b;
//}
//
//inline int addinline(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	add(2, 3);//call add(0x1287ff)
//	addinline(2, 3);//a+b--->2+3
//	system("pause");
//}