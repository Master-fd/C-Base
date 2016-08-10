/**********************************************
**�ļ�����main.cpp
**���ܣ����ͱ�̣�����ģ������ϰ 
**���ߣ���ɶ�
**���ڣ�2014.12.11
**QQ��1003768663

**��ע������ģ�壬������ֻ��һ��������ÿ�����Ƕ���һ����ͨ�ĺ�������ʱ
       ���������Զ��ڱ����ʱ�������������ض�����������Կ���ȥ����
	   ��̵�ʱ��ֻ��һ�������� 
1��ģ�庯��Ҳ���Ա����أ�C++�����������ȿ�����ͨ����
2���������ģ����Բ������Ӻõ�ƥ�䣬���ѡ��ģ�� 
***********************************************/ 

#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;


//�ڵ��ú���ģ���ʱ�򣬿��Բ���ָ�����ͣ�C++��������Զ��Ƶ���
//���ǵ�����ֵΪģ�����͵�ʱ�򣬲����Խ����Զ��Ƶ�������������ʲô����
template<typename RT,typename T1, typename T2>
RT add(T1 a, T2 b)
{
	return static_cast<RT>(a + b);
} 

//��ģ�庯�����أ���ʱint�͵�ʱ����Զ�����ѡ�������ͨ���� 
void Swap(int& a, int& b)
{
	a ^= b;
	b ^= a;
	a ^= b; 	
} 
template<typename T>
void Swap(T& a, T& b)
{
	T c;
	
	c = a;
	a = b;
	b = c;
}
template<typename T>
void SelectSort(T *array, int length)
{
	for(int i=0; i<length; i++)
	{
		int index = i;  //��¼С��ֵλ�� 
		
		for(int j=i+1; j<length; j++)
		{
			if(array[j] < array[index])
			{
				index = j;
			}		
		}	
		
		Swap<T>(array[i], array[index]);
	}
}
int main(int argc, char *argv[]) 
{
	int a = 10, b = 15;
	float fa = 10.5, fb = 15.2;
	int array[] = {5,3,4,6,8,2,9};
	float f_array[] = {5.2,3.1,4.2,6.5,0.8,0.2,9.1}; 
		
	//cout<<add<double,int,float>(a, fa)<<endl;
	cout<<add<double>(a, fa)<<endl;   //add��ģ�巵��ֵ�����Ա����������ͣ������Զ��Ƶ� 
	
	Swap(a, b); //�Զ������Ƶ����ã����Զ�ʶ��int�� 
	Swap<float>(fa, fb);   //��ʾ���͵��� 
	SelectSort<int>(array, sizeof(f_array)/sizeof(f_array[0]));
	SelectSort<float>(f_array, 7);
	
	printf("a = %d, b = %d\n", a, b);  
	printf("f = %f, f = %f\n", fa, fb);  
	for(int i=0; i<sizeof(array)/sizeof(array[0]); i++)
	{
		cout<<array[i]<<' ';	
	}
	cout<<endl;
	for(int i=0; i<sizeof(f_array)/sizeof(f_array[0]); i++)
	{
		cout<<f_array[i]<<' ';
	}
	cout<<endl;
	
	cout<<"Please enter continue..."<<endl;
	cin.get();
	
	return 0;
}


