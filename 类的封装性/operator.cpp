/***********************************
**�ļ�����Operater.cpp
**���ܣ�Operater.cpp��ľ���ʵ�ֺ���
**���ߣ���ɶ�
**���ڣ�2014.12.10
**QQ��1003768663
***********************************/ 

#include "operator.h"

//��������� 
bool Operator::Set_Operator(char op)
{
	bool res = true;
	
	if((op == '+') || (op == '-') || (op == '*') || (op == '/'))
	{
		mop = op;
		res = true;
	}
	else
	{
		mop = '\0';
		res = false;
	}
	
	return res;
}
//����������� 
void Operator::Set_Parameter(int p1, int p2)
{
	mp1 = p1;
	mp2 = p2;
}
//���������� 
bool Operator::Result(int &r)
{
	bool res = true;
	
	switch(mop)
	{
		case '+': r = mp1 + mp2; break;	
		case '-': r = mp1 - mp2; break;	
		case '*': r = mp1 * mp2; break;	
		case '/': if(0 == mp2)
				  {
					res = false;
					break;		
				  }
				  else
				  {
					r = mp1 / mp2;
					break;
				  }	
		default : res = false; break;
	}
	
	return res;
}	
	







