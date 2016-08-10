
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

//����ػ���ʽһ 
template<>
class Operator<int>
{
private:
	int i;
	int j;
	
public:
	int Add(int a, int b);
	int Minus(int a, int b);
}; 
//��ģ���ػ���ʽ��,ͨ���̳еķ�ʽ 
class child:public Operator<double>
{
};


#endif
