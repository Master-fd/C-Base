/***************************************
**�ļ�����
**���ܣ�
**���ߣ�
**���ڣ�
**QQ��
**��ע����̬��Ա����ֻ��ͨ����̬��Ա���������ã�
	��̬�ĳ�Ա������ĳ���ض�����������������������
	����������ʱ��ʹ����ˣ��������ڴ��������ʱ�򴴽�
	��̬��Աһ����������һ�������˶��ٸ������ 
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
int Text::i = 0;   //��Ҫͨ�����ַ�ʽ��ʼ����̬��Ա���� 

int main(int argc, char *argv[]) 
{
	Text t[5];   //������5����������i = 5 
	
	t[0].print();
	t[2].print();
	t[4].print();
	
	printf("Please enter continue...");
	getchar();
	
	return 0;
}
