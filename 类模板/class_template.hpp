/*********************************************
**�ļ�����class_template.cpp
**���ܣ���ģ��ľ��庯��ʵ�֣����õ�ʱ����Ҫ��������ļ� 
**���ߣ���ɶ�
**���ڣ�2014.12.11
**QQ��1003768663
*********************************************/ 
#ifndef _CLASS_TEMPLATE_HPP_
#define _CLASS_TEMPLATE_HPP_

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



#endif

