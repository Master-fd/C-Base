/*********************************************
**�ļ�����SmartPointer.hpp
**���ܣ�����ָ��ʵ�ֺ�����ʹ�õ�ʱ����Ҫ��������ļ� 
**���ߣ���ɶ�
**���ڣ�2014.12.12
**QQ��1003768663
**��ע��
����ָ�룺Ŀ����ͨ��ģ���ࡢ��������������������
         ��ʵ������ռ���Զ��ͷſռ䣬��ֹ�ڴ�й¶ 
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

