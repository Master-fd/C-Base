#ifndef _SMARTPOINTER_H_
#define _SMARTPOINTER_H_

template<typename T>
class SmartPointer
{
private:
	T *pointer;
	
public:
	SmartPointer(void);
	SmartPointer(T* new_pointer);
	~SmartPointer(void);
	T* operator-> (void);     //这里只实现->和*运算符，其他的指针运算需要另外重载实现 
	T& operator* (void);
	
};



#endif


