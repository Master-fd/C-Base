#ifndef _OPERATOR_H_
#define _OPERATOR_H_


class Operator
{
private:
	char mop;        //����� 
	int mp1;        //����1 
	int mp2;       //����2 
	
public:
	bool Set_Operator(char op);        //��������� 
	void Set_Parameter(int p1=0, int p2=0);    //����������� 
	bool Result(int &r);        //������ 
	
};




#endif
