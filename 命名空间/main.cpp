/************************************************
**�ļ�����main.cpp
**���ܣ������ռ���ϰ 
**���ߣ���ɶ�
**���ڣ�2014.12.10
**QQ�� 1003768663
**��ע��namespace std    C++�ı�׼�����ռ� 
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
	using Second::Internal::strp;   //ֻʹ������ռ��strp���� 
	
	 
	//
	struct strp p;
	p.x = 3;
	
	printf("i = %d, x = %d\n", ::i, p.x);   //::i ʹ��std�����i 
	printf("i = %d, x = %d\n", Frist::i, p.x);     //ʹ��Frist����i 
	printf("Please enter to continue...");
	getchar();
	
	return 0;
}
