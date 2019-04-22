//=========================命名空间================================
//#include<stdio.h>
//namespace N//N是命名空间的名字
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
//			printf("NN::fun()\n");//::作用域限定符
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
////using namespace N;(最好不要使用)
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


//===========================C++输入输出===============================
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
//	//endl相当于换行符
//}
//==================================================================//

//==============================缺省参数============================
//
//#include<iostream>
//#include<stdlib.h>
////using namespace std;
//
//
////从右至左连续的缺省值中间不能有间断
////如:int funCPP2(int a=1;int b;int c=2)则会报错
//
//
////缺省参数不能同时出现在声明和定义中
////如:声明
//// int funCPP3(int a=10);
////定义:
////int funCPP3(int a=10)则会报错
//  {

//  }  
//int fun1(int a, int b)
//{
//	return a + b;
//}
//
////全缺省参数
//int funCPP(int a = 100, int b = 200)
//{
//	return a + b;
//}
//
////半缺省参数
//int funCPP2(int a, int b, int c = 50)
//{
//	return a + b + c;
//}
//
//int main()
//{
//	std::cout<<fun1(2, 3)<<std::endl;
//	std::cout << funCPP() << std::endl;
//	//funCPP若无实参则用它的缺省参数(100,200),若有实参则用实参
//	std::cout << funCPP2(1, 2) << std::endl;
//	system("pause");
//}


////===============================函数重载=========================
////函数重载(只跟参数列表有关):函数名相同,参数列表不相同(个数,顺序,类型)
////顺序指的是参数类型的顺序如:char,int变为int,char,如果参数类型一样则不会重载
////如:int a,int b变为int b,int a 这样变顺序是无效的是
//
////C++的函数在底层不仅是靠函数名来区分函数
////更是利用了参数列表,所以保证了每个函数的唯一性,从而构成了重载
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

//==============================引用==================================
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
//	//int& ra = a;//定义引用:引用类型(数据类型+取地址)+新名字=旧名字
//	//引用和原变量公用一个内存,它们的地址是一样的
//	//std::cout << ra << std::endl;
//	//int b = 3;
//	//ra = b;//赋值之后ra和a一起变
//	//std::cout << ra << std::endl;
//	//std::cout << a << std::endl;
//
//	
//	//常引用
//	//const int a = 1;
//	//const int& ra = a;//必须加const,只能读不能写
//	//const int& ri = 1;
//
//	//float f = 3.4;
//	//float& rf = f;
//	////int& rrf=f;(错误,必须加const)
//	//const int& rrf = f;//(相当于常数的引用const int& rrf=3; )
//
//
//	//使用场景
//	//1.做参数
//	//int a = 3, b = 4;
//	//Swap(&a, &b);
//	//Swap(a, b);
//	//std::cout << a << " " << b << std::endl;
//
//	//2.做返回值(返回值的生命周期要大于函数的生命周期不然会出错)
	int& ret = add(2,3);
	std::cout << "hello" << std::endl;
	std::cout << ret << std::endl;

//	//3.传值,传引用效率比较
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
//	//4.引用与指针的区别
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//
//	int& ra = a;
//	ra = 20;
//
	system("pause");
}

//================================内联函数=======================
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