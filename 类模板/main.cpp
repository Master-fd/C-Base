/****************************************
**�ļ�����mian.cpp
**���ܣ����ͱ����ģ�����
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
	Operator<int> op;
	
	cout<<"a + b = "<<op.Add(a, b)<<endl;
	cout<<"a - b = "<<op.Minus(a, b)<<endl;
	
	return 0;
}
