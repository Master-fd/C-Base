/*********************************************
**�ļ�����class_template.cpp
**���ܣ���ģ��ľ��庯��ʵ�֣����õ�ʱ����Ҫ��������ļ� 
**���ߣ���ɶ�
**���ڣ�2014.12.11
**QQ��1003768663
*********************************************/ 
#ifndef _CLASS_TEMPLATE_HPP_
#define _CLASS_TEMPLATE_HPP_

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "class_template.h"


template<typename T1, typename T2>
void Operator<T1,T2>::Add(T1 a,T2 b)
{
	cout<<"Add(T1 a,T2 b)"<<endl;
	cout<<(a + b)<<endl;	
}

//�ֲ��ػ�1
template<typename T>
void Operator<T,int>::Add(T a, int b)
{
	cout<<"Add(T a,int b)"<<endl;
	cout<<(a + b)<<endl;	
} 

//�ֲ��ػ�2
template<typename T>
void Operator<T,T>::Add(T a, T b)
{
	cout<<"Add(T a,T b)"<<endl;
	cout<<static_cast<T>(a + b)<<endl;	
} 

//�ֲ��ػ�3
template<typename T>
void Operator<T*,int>::Add(T *a, int b)
{
	cout<<"Add(T *a,int b)"<<endl;
	cout<<(*a + b)<<endl;	
}


#endif

