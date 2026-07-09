void main() 
{
	char ch='y';
	double price=1000;
	double fprice,discount=0;
	if(ch=='y') 
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