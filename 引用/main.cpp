/****************************************
**文件名：main.cpp
**功能：引用重载
**作者：朱飞东 
**日期：2014.12.10
**QQ:1003768663
****************************************/ 
#include <iostream>
#include <cstdio>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void Swap(int &a, int &b)
{
	a ^= b;
	b ^= a;
	a ^= b;
}
int main(int argc, char *argv[]) 
{
	int a = 10;
	int b = 15;
	
	printf("a = %d, b = %d\n", a, b);
	Swap(a, b);
	printf("a = %d, b = %d\n", a, b);
	
	printf("Please enter to continue...");
	getchar();
	return 0;
}
