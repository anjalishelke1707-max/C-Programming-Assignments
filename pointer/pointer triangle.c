void triangledifine(int *s1,int *s2,int *s3);
void main()
{
	int s1,s2,s3;
	printf("enter side");
	scanf("%d%d%d",&s1,&s2,&s3);
	triangledifine(&s1,&s2,&s3);
	
	
}
void triangledifine(int *s1,int *s2,int *s3)
{
	if(*s1==*s2&&*s2==*s3) 
	{
		printf("triangle is equilateral");
	}
	 if(*s1==*s2||*s2==*s3||*s3==*s1)
	{
		printf("triangle is isoscale");
	}
	else
	{
		printf("triangle is scalen");
	}
	
	
}