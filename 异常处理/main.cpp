/*****************************************************
**文件名：main.cpp
**功能：C++异常处理 
**作者：朱飞东
**日期：2014.12.12
**QQ：1003768663
*****************************************************/

 
#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

#define DIV_ZERO_ERROR    (-1)

float Divid(float a, float b)
{
	float ret = 0;
	
	if((b<0.00000001) && (b>-0.00000001))
	{
		throw DIV_ZERO_ERROR;
	}
	else
	{
		ret = a	/ b;
	}
	
	return ret; 
} 
void Text(int i)
{
	if(0 == i)
		throw -1;
	if(1 == i)
		throw "error";
	if(2 == i)
		throw 'c';
	if(3 == i)
		throw -1.1;
}
int main(int argc, char *argv[]) 
{
	
	try
	{
		cout<<Divid(5,2)<<endl;
		cout<<Divid(5,0)<<endl;		
	}
	catch(int error)
	{
		cout<<"error = "<<error<<endl;	
	}
	
	for(int i=0; i<4; i++)
	{
		try
		{
			Text(i);
		}
		catch(int error)
		{
			cout<<"int error = "<<error<<endl;	
		}
		catch(const char *error)
		{
			cout<<"char *error = "<<error<<endl;	
		}
		catch(char error)
		{
			cout<<"char error = "<<error<<endl;	
		}
		catch(...)        //捕获任何类型的异常，一般作为最后一个异常处理块出现 
		{
			cout<<"throw error"<<endl;	
		}
	}

	cout<<"Please enter to contiune..."<<endl;
	cin.get();
	
	return 0;
}
