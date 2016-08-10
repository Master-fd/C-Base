/************************************************
**文件名：main.cpp
**功能：命名空间练习 
**作者：朱飞东
**日期：2014.12.10
**QQ： 1003768663
**备注：namespace std    C++的标准命名空间 
************************************************/
#include <iostream>
#include <cstdio>


namespace Frist
{
	int i = 1;
	int j = 0;
} 
namespace Second
{
	int i = 2;
	
	namespace Internal
	{
		struct strp
		{
			int x;
			int y;		
		};	
	}
}
int i = 3;
int main(int argc, char *argv[]) 
{
	using namespace std;
	using namespace Frist;
	using Second::Internal::strp;   //只使用这个空间的strp变量 
	
	 
	//
	struct strp p;
	p.x = 3;
	
	printf("i = %d, x = %d\n", ::i, p.x);   //::i 使用std里面的i 
	printf("i = %d, x = %d\n", Frist::i, p.x);     //使用Frist中了i 
	printf("Please enter to continue...");
	getchar();
	
	return 0;
}
