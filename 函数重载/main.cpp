/*********************************************************
**文件名：mian.cpp
**功能：函数重载测试
**作者：朱飞东
**日期：2014.12.10
**QQ：1003768663
*********************************************************/
 
#include <iostream>
#include <cstdio>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void fun(int a, int b)
{
	printf("a = %d, b = %d\n", a, b);
}
void fun(char a, int b)
{
	printf("b = %d, a = %d\n", a, b);
}
void fun(int a)
{
	printf("a = %d\n", a);
}
void fun(const char *s)
{
	printf("s = %s,\n", s);
}
int main(int argc, char *argv[])
{
	int a = 10;
	char b = 15;
	const char* s = "Funo overload text";
	
	
	fun(a, b); 
	fun(b, a);
	fun(a);
	fun(s);
	
	return 0;
}
