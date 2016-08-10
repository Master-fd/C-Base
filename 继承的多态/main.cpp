/*********************************************
**文件名：main.cpp
**功能：类的多态测试virtual 
**作者:朱飞东 
**日期：2014.12.11
**QQ：1003868663
**备注：
1、当父类和子类存在同名成员的时候，访问时采用作用域符：parent::i=0; child::i=0 
2、子类和父类相同的函数不叫重载，叫重写，在类中无法重载
3、重载发生在同一个作用域中，重写发生在子类与父类之间
4、当出现重写的时候，调用的时候子类会覆盖父类。
5、通过virtual虚函数可以解决强制转换后同名函数调用问题 
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
		printf("Child a = %d\n", a);    //打印子类的 
	}
}; 
//这里传入的是child对象，所以必须在父类里面声明函数为virtual
void class_print(Parent* parent)
{
	parent->print();
} 
int main(int argc, char *argv[]) 
{
	Parent parent(1,2);
	Child child(3,5);
	
	class_print(&parent);
	class_print(&child);     //这里传入的是child对象，所以必须在父类里面声明函数为virtual 
	
	cout<<"Please enter continue..."<<endl;
	cin.get();
	
	return 0;
}

