int triangledifine();
void main()
{
	int type=triangledifine();
	if(type==1) 
	{
		printf("triangle is equilateral");
	}
	 if(type==2)
	{
		printf("triangle is isoscale");
	}
	else
	{
		printf("triangle is scalen");
	}
}
int triangledifine()
{
	int s1,s2,s3;
	printf("enter side");
	scanf("%d%d%d",&s1,&s2,&s3);
	
	if(s1==s2&&s2==s3) 
	{
		return 1;
	}
	 if(s1==s2||s2==s3||s3==s1)
	{
		return 2;
	}
	else
	{
		return 3;
	}
	
}