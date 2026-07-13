int greaterno();
void main()
{
	int greater,a,b,c;
	greater=greaterno();
	if( a)
	{
		printf("a is greater");
	}
	if( b)
	{
		printf("b is greater");
	}
	if( c)
	{
		printf("c is greater");
	}
}
int greaterno()
{
	int a,b,c;
	printf("enter numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b&&a>=c)
	{
		return a;
	}
	if(b>=a&&b>=c)
	{
		return b;
	}
	if(c>=a&&c>=b)
	{
		return c;
	}
	
}