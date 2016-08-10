/****************************************
**文件名：mian.cpp
**功能：泛型编程--类模板特化测试
**作者：朱飞东
**日期：2014.12.11
**QQ ：1003768663
******************************************/ 


#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "class_template.hpp"    //这里包含的是.hpp文件，不是.h文件 
  

using namespace std;



int main(int argc, char *argv[]) 
{
	int a = 25, b = 15;
	float i = 22.2, j = 12.2;
	double x = 10.5, y = 20.5;
	 
	Operator<int> iop;   //优先调用特化类 
	Operator<float> cop;
	child dop;    //调用特殊方式的特化类 
	
	cout<<"a + b = "<<iop.Add(a, b)<<endl;
	cout<<"a - b = "<<iop.Minus(a, b)<<endl;
	
	cout<<"i + j = "<<cop.Add(i, j)<<endl;
	cout<<"i - j = "<<cop.Minus(i, j)<<endl;
	
	cout<<"x + y = "<<cop.Add(x, y)<<endl;
	cout<<"x - y = "<<cop.Minus(x, y)<<endl;
	
	return 0;
}

