
#ifndef _CLASS_TEMPLATE_H_
#define _CLASS_TEMPLATE_H_

//��ģ�� 
template<typename T1, typename T2>
class Operator
{
public:	
	void Add(T1 a,T2 b);
};

//�ֲ��ػ�1
template<typename T>
class Operator<T, int> 
{
public:	
	void Add(T a,int b);
};

//�ֲ��ػ�2 
template<typename T>
class Operator<T, T> 
{
public:	
	void Add(T a,T b);
};

//�ֲ��ػ�3
template<typename T>
class Operator<T*, int> 
{
public:	
	void Add(T* a, int b);
}; 

#endif
