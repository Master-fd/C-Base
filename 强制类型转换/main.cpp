/*********************************************************
**文件名：main.cpp
**功能：C++强制类型转换演示 
**作者：朱飞东
**日期：2014.12.10
**QQ：1003768663

**备注：
static_cast<>()：是在编译期进行转换，所以无法在运行时检测类型 
	1、 用于基本类型之间的转换，但是不能用于基本类型指针间的转换 
	2、用于有继承关系的对象之间的转换和类指针之间的转换 
const_cast<>()：
	1、用于去除变量的const属性 
reinterpret_cast<>()
	1、用于指针类型之间的转换
	2、用于整数和指针类型间的转换 
dynamic_cast<>()
	1、主要用于类层次之间的转换，还可以用于类之间的交叉转换
	2、dynamic_cast具有运行时类型检测功能，比static_cast更加安全 
	3、dynamic_cast动态类型转换的时候必须要有一个虚函数，一般为析构函数 
**********************************************************/ 
#include <iostream>
#include <cstdio>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void static_cast_exchg(void)
{
	int i = 0x12345;
	char c = 'c';
	int *pi = &i;
	char *pc = &c;
	
	c = static_cast<char>(i); 
//	pc = static_cast<char*><pi>;   //编译产生警告，不能用于基本类型指针间转换 
	
	printf("c = %x\n", c);
}
void const_cast_exchg(void)
{
	const int& i = 5;    //只读变量，i本质上还是变量 
	const int x = 2;     //x是真正意义上的常量，进入符号表 
	
	int& k = const_cast<int&>(i);   //去除i的const属性 
	int& y = const_cast<int&>(x);   //去除x的const属性，为其x分配空间 

	k = 5;
	y = 6;
	printf("i = %d, x = %d\n", i, x);   //x取自符号表，不是取自内存 
	printf("k = %d, y = %d\n", k, y);   //y取自内存，所以不一样，i和k都是取自内存，所以一样
	
	printf("i_addr = %x, x_addr = %x\n", &i, &x); 
	printf("k_addr = %x, y_addr = %x\n", &k, &y);
}
void reinterpret_cast_exchg(void)
{
	int i = 0x12345;
	char c = 'c';
	int *pi = NULL;
	char *pc = NULL;
	
	pi = reinterpret_cast<int*>(&i);    
	pc = reinterpret_cast<char*>(&c);  
	
	printf("c = %c, i = %x\n", *pc, *pi);
}
//使用 dynamic_cast的时候，必须有一个虚函数，一般是析构函数 
class Parent
{
public:
	virtual ~Parent()
	{
	}	
};
class Child:public Parent
{
public:
	int Add(int a, int b)
	{
		return a + b;	
	}
}; 
void dynamic_cast_exchg(Parent* parent)
{
	Child* child = dynamic_cast<Child*>(parent);   //动态转换，必须要有虚函数 
	
	if(child != NULL)
	{
		printf("child\n");	
		printf("Add(a,b) = %d\n", child->Add(15, 2));
	}
	else
	{
		printf("parent\n");	
	}
}
int main(int argc, char *argv[])
{
	Child child;
	Parent parent;
	
	static_cast_exchg();
	const_cast_exchg();
	reinterpret_cast_exchg();
	dynamic_cast_exchg(&child);
	dynamic_cast_exchg(&parent);
	
	printf("Please enter continue...");
	getchar();
	
	return 0;
}
