/********************************************************
**文件名：main.cpp
**功能：类的构造函数与析构函数练习
**作者：朱飞东
**日期：2014.12.11
**QQ：1003768663
**备注：构造函数可以重载，析构函数不可以重载
	构造和析构函数都没有返回值 
	类中的const定义的，只能是只读变量，不可能是进入符号表的常量 
********************************************************/ 

#include <iostream>
#include <cstdio>
class M
{
private:
	int m;
	
public:
	M(int v)
	{
		m = v;
		printf("inter M\n");	
	}
	
	int get_m(void)
	{
		return m;	
	}
};

class Text
{
private:
	int i;
	int j; 
	int k;       //类的成员变量不可以初始化 
	const int ci;   //定义一个常量没有初始化 ,必须采用初始化列表来初始化 
	M m1;       
	M m2;
	 
public:
	Text(int x):ci(x),m1(x),m2(x)
	{
		i = x;
		j = 0;
		k = 0;
	}
	Text(int x, int y, int z):ci(x),m1(y),m2(z)
	{
		i = x;
		j = y;
		k = z;
	}
	Text(const Text& v);   //拷贝构造函数，如果没有定义，则默认的拷贝构造函数是成员值之间直接赋值 
	
	
	void print(void)
	{
		printf("i = %d, j = %d, k = %d\n", i, j ,k);	
		printf("ci = %d, m1 = %d, m2 = %d\n", ci, m1.get_m(), m2.get_m());	
	}
	
	~Text()          //析构函数 
	{
		printf("~Text\n");	
	}	
};
Text::Text(const Text& v):ci(0),m1(0),m2(0)   //拷贝构造函数，如果没有定义，则默认的拷贝构造函数是成员值之间直接赋值 
{
	i = v.i + 1;
	j = v.j + 1;
	k = v.k + 1;
	printf("Text(Text& v)\n");	
}

int main(int argc, char *argv[]) 
{
	
	Text t1(4,5,6);
	Text t2 = (4,5,6);
	Text t3(4,5,6);
	Text t4 = t3;
	
	t1.print();
	t2.print();
	t3.print();
	t4.print();
	
	
	
	printf("Please enter to continue...");
	getchar();
	
	return 0;
}
