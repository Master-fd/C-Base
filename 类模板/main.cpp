/****************************************
**文件名：mian.cpp
**功能：泛型编程类模板测试
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
	Operator<int> op;
	
	cout<<"a + b = "<<op.Add(a, b)<<endl;
	cout<<"a - b = "<<op.Minus(a, b)<<endl;
	
	return 0;
}
