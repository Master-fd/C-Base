/***********************************************
**文件名：main.cpp
**功能:类模板的局部特化测试 
**作者：朱飞东
**日期：2014.12.12
**QQ：1003768663
***********************************************/ 

#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
#include "class_template.hpp"


int main(int argc, char *argv[]) 
{
	Operator<double,float> t1;   //类模板 
	Operator<float,int> t2;          //特化1 
	Operator<double,double> t3;      //特化2 
	Operator<int*,int> t4;           //特化3 
	
	int a = 5;
	 
	t1.Add(5.5, 5.5);
	t2.Add(5.5,5);
	t3.Add(2.5,5.6);
	t4.Add(&a, 5);
	
	
	cout<<"Please enter to continue..."<<endl;
	cin.get();
	
	return 0;
}
