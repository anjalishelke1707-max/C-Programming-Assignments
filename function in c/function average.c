void main()
{
	int a,b,c,d,e;
	printf("enter 5 numbers: ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	averageof(a,b,c,d,e);
}
void averageof(a,b,c,d,e)
{
	int A,sum;
	sum=a+b+c+d+e;
	A=sum/5;
	printf("average of number is = %d",A);
}