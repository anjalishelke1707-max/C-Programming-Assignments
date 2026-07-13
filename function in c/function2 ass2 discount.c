#include<stdio.h>
double totalsalery();
void main()
{
	double price=totalsalery();
	double fprice,discount=0;
	char ch;
	if(ch) 
	{
		if(price>500) 
		{
			fprice=price-price*0.20;
		} 
		else 
		{
			fprice=price-price*0.10;
		}
	} 
	else 
	{
		if(price>600)
			fprice=price-price*0.15;
		else
			fprice=price;
	}
	printf("final price over price %lf is %lf ",price,fprice);
} 
double totalsalery()
{
	char ch;
	printf("enter charector");
	scanf("%c",&ch);
	double price;
	printf("enter price");
	fflush(stdin);
	scanf("%lf",&price);
	return price;

}