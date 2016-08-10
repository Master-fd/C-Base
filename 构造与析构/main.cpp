/********************************************************
**�ļ�����main.cpp
**���ܣ���Ĺ��캯��������������ϰ
**���ߣ���ɶ�
**���ڣ�2014.12.11
**QQ��1003768663
**��ע�����캯���������أ�������������������
	���������������û�з���ֵ 
	���е�const����ģ�ֻ����ֻ���������������ǽ�����ű�ĳ��� 
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
	int k;       //��ĳ�Ա���������Գ�ʼ�� 
	const int ci;   //����һ������û�г�ʼ�� ,������ó�ʼ���б�����ʼ�� 
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
	Text(const Text& v);   //�������캯�������û�ж��壬��Ĭ�ϵĿ������캯���ǳ�Աֵ֮��ֱ�Ӹ�ֵ 
	
	
	void print(void)
	{
		printf("i = %d, j = %d, k = %d\n", i, j ,k);	
		printf("ci = %d, m1 = %d, m2 = %d\n", ci, m1.get_m(), m2.get_m());	
	}
	
	~Text()          //�������� 
	{
		printf("~Text\n");	
	}	
};
Text::Text(const Text& v):ci(0),m1(0),m2(0)   //�������캯�������û�ж��壬��Ĭ�ϵĿ������캯���ǳ�Աֵ֮��ֱ�Ӹ�ֵ 
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
