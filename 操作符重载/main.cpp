/***********************************************
**�ļ�����
**���ܣ�C++���������ز���
**���ߣ���ɶ�
**���ڣ�2014.12.11
**QQ��1003768663

**��ע�����������ر����ϻ��Ǻ������� 
�мǣ���Ҫ���� &&  ||�߼������ ,�����ֶ�·ԭ�� 

1���޷��޸������������ʱ��Ҫʹ�� ȫ�ֺ��� ���� �确<<�������� 
2��=,[],(),->ֻ��ʹ�ó�Ա�������� 
3����Ա���غ������Բ���Ҫ������� 
***********************************************/ 

#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

class Complex
{
private:
	int i;
	int j;
	
public:
	Complex(int x=0, int y=0)
	{
		i = x;
		j = y;
	}
	
	void print(void)
	{
		printf("i = %d, j = %d\n", i,j);	
	}
	
	friend Complex operator+ (Complex& a, Complex& b);   //ȫ�����غ���������Ϊ��Ԫ����
	Complex operator++ (int);  //��Ա���غ���
	Complex operator++ (void); 
};
//���ز�����+ (ȫ�ֺ���)
Complex operator+ (Complex& a, Complex& b)   
{
	Complex ret;
	
	ret.i = a.i + b.i;	
	ret.j = a.j + b.j;
	
	return ret;
}
//����++ --��������Ҫʹ��ռλ�� 
//a++����� 
Complex Complex::operator++ (int)
{
	Complex ret = *this;  //���滹û���޸ĵ��� 
	
	i++;
	j++;
	
	return ret;   //����û���޸ĵ��� 
} 
//++a����� 
Complex Complex::operator++ (void)
{
	++i;
	++j;

	return *this;   //���뷵���޸�֮����� 
} 

int main(int argc, char *argv[]) 
{
	Complex t1(1,2);
	Complex t2(3,4);
	Complex t3;
	Complex t4 = ++t2;
	
	
	t4.print();
	
	t3 = t1 + t2;
	t3.print();
	
	
	
	
	cout<<"Please enter continue..."<<endl;
	cin.get();
	
	return 0;
}
