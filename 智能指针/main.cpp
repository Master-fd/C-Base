/*********************************************
**�ļ�����main.cpp
**���ܣ�����ָ����Ժ��� 
**���ߣ���ɶ�
**���ڣ�2014.12.12
**QQ��1003768663
**��ע��
����ָ�룺Ŀ����ͨ��ģ���ࡢ��������������������
         ��ʵ������ռ���Զ��ͷſռ䣬��ֹ�ڴ�й¶ 
         
//����ֻʵ��->��*��������в��ԣ�������ָ������û�������޷����� 
**********************************************/ 


#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "SmartPointer.hpp"

using namespace std;

int main(int argc, char *argv[]) 
{
	SmartPointer<int> pi = new int(5);   //����һ������ָ�룬������5��int�ռ� 
	
	
	*pi =  5;
	cout<<"*pi = "<<*pi<<endl;		
	
	cout<<"Please enter to contiune...";
	cin.get();
	
	return 0;
}


