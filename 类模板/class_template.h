
#ifndef _CLASS_TEMPLATE_H_
#define _CLASS_TEMPLATE_H_


template<typename T>
class Operator
{
private:
	T i;
	T j;
	
public:
	T Add(T a,T b);
	T Minus(T a, T b);
};

 


#endif
