/*********************************************
**�ļ�����main.cpp
**���ܣ���Ķ�̬����virtual 
**����:��ɶ� 
**���ڣ�2014.12.11
**QQ��1003868663
**��ע��
1����������������ͬ����Ա��ʱ�򣬷���ʱ�������������parent::i=0; child::i=0 
2������͸�����ͬ�ĺ����������أ�����д���������޷�����
3�����ط�����ͬһ���������У���д�����������븸��֮��
4����������д��ʱ�򣬵��õ�ʱ������Ḳ�Ǹ��ࡣ
5��ͨ��virtual�麯�����Խ��ǿ��ת����ͬ�������������� 
*********************************************/ 


#include <iostream>
#include <cstdlib>
#include <cstdio>


using namespace std;

class Parent
{
protected:
	int a;
	int b;
	
public:
	Parent(int i=0, int j=0)
	{
		a = i;	
		b = j;
	}
	
	virtual void print(void)
	{
		printf("Parent a = %d, b = %d\n", a, b);	
	}
};

class Child:public Parent
{
private:
	int a;     
	
public:
	Child(int a=0, int b=0):Parent(a, b) 
	{    
		this->a = a;
		this->b = b;
	}
	void print(void)
	{
		printf("Child a = %d\n", a);    //��ӡ����� 
	}
}; 
//���ﴫ�����child�������Ա����ڸ���������������Ϊvirtual
void class_print(Parent* parent)
{
	parent->print();
} 
int main(int argc, char *argv[]) 
{
	Parent parent(1,2);
	Child child(3,5);
	
	class_print(&parent);
	class_print(&child);     //���ﴫ�����child�������Ա����ڸ���������������Ϊvirtual 
	
	cout<<"Please enter continue..."<<endl;
	cin.get();
	
	return 0;
}

