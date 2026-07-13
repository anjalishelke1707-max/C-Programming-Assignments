#include<stdio.h>
	void add(int no1,int no2)
	{
	printf("addition=%d",no1+no2);
	}
	void sub(int no1,int no2)
	{
	printf("substraction=%d",no1-no2);
	}
	void mul(int no1,int no2)
	{
	printf("multiplication=%d",no1*no2);
	}
	void divi(int no1,int no2)
	{
	printf("division=%d",no1/no2);
	}
	void mod(int no1,int no2)
	{
	printf("mod=%d",no1%no2);
	}
void main()
{
	
	int no1,no2;
	char ch;
	printf("enter no1 and no2");
	scanf("%d%d",&no1,&no2);
	printf("enter charector");
	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='+')
	{
		add(no1,no2);
	}
	if(ch=='-')
	{
		sub(no1,no2);
	}
	if(ch=='*')
	{
		mul(no1,no2);
	}
	if(ch=='/')
	{
		divi(no1,no2);
	}
	if(ch=='%')
	{
		mod(no1,no2);
	}
}