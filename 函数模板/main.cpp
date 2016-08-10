/**********************************************
**文件名：main.cpp
**功能：泛型编程，函数模板编程练习 
**作者：朱飞东
**日期：2014.12.11
**QQ：1003768663

**备注：函数模板，并不是只有一个函数，每当我们定义一个不通的函数类型时
       编译器会自动在编译的时候帮我们完成重载多个函数，所以看上去我们
	   编程的时候只有一个函数体 
1、模板函数也可以被重载，C++编译器会优先考虑普通函数
2、如果函数模板可以参数更加好的匹配，则会选择模板 
***********************************************/ 

#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;


//在调用函数模板的时候，可以不用指定类型，C++会编译器自动推导，
//但是当返回值为模板类型的时候，不可以进行自动推导，必须声明是什么类型
template<typename RT,typename T1, typename T2>
RT add(T1 a, T2 b)
{
	return static_cast<RT>(a + b);
} 

//与模板函数重载，当时int型的时候会自动优先选择这个普通函数 
void Swap(int& a, int& b)
{
	a ^= b;
	b ^= a;
	a ^= b; 	
} 
template<typename T>
void Swap(T& a, T& b)
{
	T c;
	
	c = a;
	a = b;
	b = c;
}
template<typename T>
void SelectSort(T *array, int length)
{
	for(int i=0; i<length; i++)
	{
		int index = i;  //记录小的值位置 
		
		for(int j=i+1; j<length; j++)
		{
			if(array[j] < array[index])
			{
				index = j;
			}		
		}	
		
		Swap<T>(array[i], array[index]);
	}
}
int main(int argc, char *argv[]) 
{
	int a = 10, b = 15;
	float fa = 10.5, fb = 15.2;
	int array[] = {5,3,4,6,8,2,9};
	float f_array[] = {5.2,3.1,4.2,6.5,0.8,0.2,9.1}; 
		
	//cout<<add<double,int,float>(a, fa)<<endl;
	cout<<add<double>(a, fa)<<endl;   //add带模板返回值，所以必须声明类型，不能自动推导 
	
	Swap(a, b); //自动类型推导调用，会自动识别int型 
	Swap<float>(fa, fb);   //显示类型调用 
	SelectSort<int>(array, sizeof(f_array)/sizeof(f_array[0]));
	SelectSort<float>(f_array, 7);
	
	printf("a = %d, b = %d\n", a, b);  
	printf("f = %f, f = %f\n", fa, fb);  
	for(int i=0; i<sizeof(array)/sizeof(array[0]); i++)
	{
		cout<<array[i]<<' ';	
	}
	cout<<endl;
	for(int i=0; i<sizeof(f_array)/sizeof(f_array[0]); i++)
	{
		cout<<f_array[i]<<' ';
	}
	cout<<endl;
	
	cout<<"Please enter continue..."<<endl;
	cin.get();
	
	return 0;
}


