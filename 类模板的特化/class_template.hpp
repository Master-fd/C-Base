/*********************************************
**�ļ�����class_template.cpp
**���ܣ���ģ��ľ��庯��ʵ�֣����õ�ʱ����Ҫ��������ļ� 
**���ߣ���ɶ�
**���ڣ�2014.12.11
**QQ��1003768663
*********************************************/ 
#ifndef _CLASS_TEMPLATE_HPP_
#define _CLASS_TEMPLATE_HPP_

#include <cstdio>
#include "class_template.h"


template<typename T>
T Operator<T>::Add(T a,T b)
{
	return a + b;		
}
template<typename T>	
T Operator<T>::Minus(T a, T b)
{
	return a - b;	
}
//��ģ���ػ���ʽ1 
int Operator<int>::Add(int a,int b)
{
	printf("into tehua\n");	
	return a + b;		
}
int Operator<int>::Minus(int a, int b)
{
	printf("into tehua\n");	
	return a - b;	
}

#endif

