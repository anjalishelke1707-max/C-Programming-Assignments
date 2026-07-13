void main()
{
greater();	
}
void greater()
{
	int a,b,c;
	printf("enter numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b&&a>=c)
	{
		printf("a is greater");
	}
	if(b>=a&&b>=c)
	{
		printf("b is greater");
	}
	if(c>=a&&c>=b)
	{
		printf("c is greater");
	}
}