/*********************************************
**文件名：class_template.cpp
**功能：类模板的具体函数实现，调用的时候需要包含这个文件 
**作者：朱飞东
**日期：2014.12.11
**QQ：1003768663
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

