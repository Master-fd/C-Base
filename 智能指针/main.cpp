/*********************************************
**文件名：main.cpp
**功能：智能指针测试函数 
**作者：朱飞东
**日期：2014.12.12
**QQ：1003768663
**备注：
智能指针：目的是通过模板类、构造和析构、运算符重载
         来实现申请空间后自动释放空间，防止内存泄露 
         
//这里只实现->和*运算符进行测试，其他的指针运算没有重载无法运算 
**********************************************/ 


#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "SmartPointer.hpp"

using namespace std;

int main(int argc, char *argv[]) 
{
	SmartPointer<int> pi = new int(5);   //定义一个智能指针，并申请5个int空间 
	
	
	*pi =  5;
	cout<<"*pi = "<<*pi<<endl;		
	
	cout<<"Please enter to contiune...";
	cin.get();
	
	return 0;
}


