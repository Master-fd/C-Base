/**********************************************
**�ļ�����
**���ܣ���ķ�װ�Բ���
**���ߣ���ɶ�
**���ڣ�2014.12.10
**QQ��1003768663
**********************************************/
 
#include <iostream>
#include <cstdio>
#include "operator.h"

int main(int argc, char *argv[]) 
{
	Operator operator_add;
	int res = 0;
	int a = 20,b = 5;
	
	printf("a = %d, b = %d\n", a, b);
	
	operator_add.Set_Operator('+');        //��������� 
	operator_add.Set_Parameter(a,b);    //����������� 
	operator_add.Result(res);        //������ 	
	printf("a + b = %d\n", res);
	
	operator_add.Set_Operator('-');      
	operator_add.Set_Parameter(a,b);    
	operator_add.Result(res); 
	printf("a - b = %d\n", res);
	
	operator_add.Set_Operator('*');      
	operator_add.Set_Parameter(a,b);    
	operator_add.Result(res); 
	printf("a * b = %d\n", res);
	
	operator_add.Set_Operator('/');      
	operator_add.Set_Parameter(a,b);    
	operator_add.Result(res); 
	printf("a / b = %d\n", res);
	
	printf("Please enter continue...");
	getchar();
	
	return 0;
}
