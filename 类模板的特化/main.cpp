/****************************************
**�ļ�����mian.cpp
**���ܣ����ͱ��--��ģ���ػ�����
**���ߣ���ɶ�
**���ڣ�2014.12.11
**QQ ��1003768663
******************************************/ 


#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "class_template.hpp"    //�����������.hpp�ļ�������.h�ļ� 
  

using namespace std;



int main(int argc, char *argv[]) 
{
	int a = 25, b = 15;
	float i = 22.2, j = 12.2;
	double x = 10.5, y = 20.5;
	 
	Operator<int> iop;   //���ȵ����ػ��� 
	Operator<float> cop;
	child dop;    //�������ⷽʽ���ػ��� 
	
	cout<<"a + b = "<<iop.Add(a, b)<<endl;
	cout<<"a - b = "<<iop.Minus(a, b)<<endl;
	
	cout<<"i + j = "<<cop.Add(i, j)<<endl;
	cout<<"i - j = "<<cop.Minus(i, j)<<endl;
	
	cout<<"x + y = "<<cop.Add(x, y)<<endl;
	cout<<"x - y = "<<cop.Minus(x, y)<<endl;
	
	return 0;
}

