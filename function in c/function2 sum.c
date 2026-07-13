int sumofdigits();
void main()
{
	int sum;
	sum=sumofdigits();
	printf("sum=%d",sum);
}
int sumofdigits()
{
	int no1,no2;
	printf("enter number");
	scanf("%d%d",&no1,&no2);
	return no1+no2;
}