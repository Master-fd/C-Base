/*********************************************
**文件名：SmartPointer.hpp
**功能：智能指针实现函数，使用的时候需要包含这个文件 
**作者：朱飞东
**日期：2014.12.12
**QQ：1003768663
**备注：
智能指针：目的是通过模板类、构造和析构、运算符重载
         来实现申请空间后自动释放空间，防止内存泄露 
**********************************************/ 

#ifndef _SMARTPOINTER_HPP_
#define _SMARTPOINTER_HPP_

#include "SmartPointer.h"

template<typename T>
SmartPointer<T>::SmartPointer(void)
{
	pointer = NULL;
}

template<typename T>
SmartPointer<T>::SmartPointer(T* new_pointer)
{
	pointer = new_pointer;
}

template<typename T>
SmartPointer<T>::~SmartPointer(void)
{
	delete pointer;
}

template<typename T>
T* SmartPointer<T>::operator-> (void)
{
	return pointer;
}

template<typename T>
T& SmartPointer<T>::operator* (void)
{
	return *pointer;
}
	
	
#endif

