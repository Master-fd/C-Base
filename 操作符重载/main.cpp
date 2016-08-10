/***********************************************
**文件名：
**功能：C++操作符重载测试
**作者：朱飞东
**日期：2014.12.11
**QQ：1003768663

**备注：操作符重载本质上还是函数重载 
切记：不要重载 &&  ||逻辑运算符 ,他们又短路原则 

1、无法修改左操作数的类时需要使用 全局函数 重载 如‘<<’操作符 
2、=,[],(),->只能使用成员函数重载 
3、成员重载函数可以不需要左操作符 
***********************************************/ 

#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

class Complex
{
private:
	int i;
	int j;
	
public:
	Complex(int x=0, int y=0)
	{
		i = x;
		j = y;
	}
	
	void print(void)
	{
		printf("i = %d, j = %d\n", i,j);	
	}
	
	friend Complex operator+ (Complex& a, Complex& b);   //全局重载函数，声明为友元函数
	Complex operator++ (int);  //成员重载函数
	Complex operator++ (void); 
};
//重载操作符+ (全局函数)
Complex operator+ (Complex& a, Complex& b)   
{
	Complex ret;
	
	ret.i = a.i + b.i;	
	ret.j = a.j + b.j;
	
	return ret;
}
//重载++ --操作符需要使用占位符 
//a++的情况 
Complex Complex::operator++ (int)
{
	Complex ret = *this;  //保存还没有修改的类 
	
	i++;
	j++;
	
	return ret;   //返回没有修改的类 
} 
//++a的情况 
Complex Complex::operator++ (void)
{
	++i;
	++j;

	return *this;   //必须返回修改之后的类 
} 

int main(int argc, char *argv[]) 
{
	Complex t1(1,2);
	Complex t2(3,4);
	Complex t3;
	Complex t4 = ++t2;
	
	
	t4.print();
	
	t3 = t1 + t2;
	t3.print();
	
	
	
	
	cout<<"Please enter continue..."<<endl;
	cin.get();
	
	return 0;
}
