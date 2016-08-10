
#ifndef _CLASS_TEMPLATE_H_
#define _CLASS_TEMPLATE_H_

//类模板 
template<typename T1, typename T2>
class Operator
{
public:	
	void Add(T1 a,T2 b);
};

//局部特化1
template<typename T>
class Operator<T, int> 
{
public:	
	void Add(T a,int b);
};

//局部特化2 
template<typename T>
class Operator<T, T> 
{
public:	
	void Add(T a,T b);
};

//局部特化3
template<typename T>
class Operator<T*, int> 
{
public:	
	void Add(T* a, int b);
}; 

#endif
