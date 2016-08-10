#ifndef _OPERATOR_H_
#define _OPERATOR_H_


class Operator
{
private:
	char mop;        //运算符 
	int mp1;        //参数1 
	int mp2;       //参数2 
	
public:
	bool Set_Operator(char op);        //设置运算符 
	void Set_Parameter(int p1=0, int p2=0);    //设置运算参数 
	bool Result(int &r);        //运算结果 
	
};




#endif
