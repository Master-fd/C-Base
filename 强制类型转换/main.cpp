/*********************************************************
**�ļ�����main.cpp
**���ܣ�C++ǿ������ת����ʾ 
**���ߣ���ɶ�
**���ڣ�2014.12.10
**QQ��1003768663

**��ע��
static_cast<>()�����ڱ����ڽ���ת���������޷�������ʱ������� 
	1�� ���ڻ�������֮���ת�������ǲ������ڻ�������ָ����ת�� 
	2�������м̳й�ϵ�Ķ���֮���ת������ָ��֮���ת�� 
const_cast<>()��
	1������ȥ��������const���� 
reinterpret_cast<>()
	1������ָ������֮���ת��
	2������������ָ�����ͼ��ת�� 
dynamic_cast<>()
	1����Ҫ��������֮���ת����������������֮��Ľ���ת��
	2��dynamic_cast��������ʱ���ͼ�⹦�ܣ���static_cast���Ӱ�ȫ 
	3��dynamic_cast��̬����ת����ʱ�����Ҫ��һ���麯����һ��Ϊ�������� 
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
//	pc = static_cast<char*><pi>;   //����������棬�������ڻ�������ָ���ת�� 
	
	printf("c = %x\n", c);
}
void const_cast_exchg(void)
{
	const int& i = 5;    //ֻ��������i�����ϻ��Ǳ��� 
	const int x = 2;     //x�����������ϵĳ�����������ű� 
	
	int& k = const_cast<int&>(i);   //ȥ��i��const���� 
	int& y = const_cast<int&>(x);   //ȥ��x��const���ԣ�Ϊ��x����ռ� 

	k = 5;
	y = 6;
	printf("i = %d, x = %d\n", i, x);   //xȡ�Է��ű�����ȡ���ڴ� 
	printf("k = %d, y = %d\n", k, y);   //yȡ���ڴ棬���Բ�һ����i��k����ȡ���ڴ棬����һ��
	
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
//ʹ�� dynamic_cast��ʱ�򣬱�����һ���麯����һ������������ 
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
	Child* child = dynamic_cast<Child*>(parent);   //��̬ת��������Ҫ���麯�� 
	
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
