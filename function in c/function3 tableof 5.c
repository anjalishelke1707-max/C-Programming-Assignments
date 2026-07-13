void main()
{
	int n,i;
	printf("enter no");
	scanf("%d%d",&n,&i);
	tableof5(n,i);
}
tableof5(int n,int i)
{
	
	while(i<=10)
	{
		printf("%d ",n*i);
		i++;
	}
}