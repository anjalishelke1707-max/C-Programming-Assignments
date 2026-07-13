void main()
{
	int n,i;
	printf("enter no");
	scanf("%d%d",&n,&i);
	int table=tableof5(n,i);
	printf("%d ",table);
}
tableof5(int n,int i)
{
	
	while(i<=10)
	{
		int table=n*i;
		i++;
		return table;
	}
	
}