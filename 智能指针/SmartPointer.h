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
	T* operator-> (void);     //����ֻʵ��->��*�������������ָ��������Ҫ��������ʵ�� 
	T& operator* (void);
	
};



#endif


