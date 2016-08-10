/***************************************
**文件名：
**功能：
**作者：
**日期：
**QQ：
**备注：静态成员变量只能通过静态成员函数来调用，
	静态的成员不属于某个特定的类对象。他是属于整个类的
	在来创建的时候就创建了，而不是在创建对象的时候创建
	静态成员一般用来测试一共定义了多少个类对象 
***************************************/ 

#include <iostream>
#include <cstdio>


class Text
{
private:
	static int i;
	
public:
	Text(void)
	{
		i ++;	
	}
	
	static void print(void)
	{
		printf("static i = %d\n", i);
	}
	
	~Text(void)
	{
		i --;	
	} 
};
int Text::i = 0;   //需要通过这种方式初始化静态成员变量 

int main(int argc, char *argv[]) 
{
	Text t[5];   //定义了5个对象，所以i = 5 
	
	t[0].print();
	t[2].print();
	t[4].print();
	
	printf("Please enter continue...");
	getchar();
	
	return 0;
}
