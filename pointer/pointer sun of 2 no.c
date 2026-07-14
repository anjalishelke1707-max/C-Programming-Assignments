void sumof1to5(int* start,int* end,int *sum);
void main()
{
	int start,end,sum=0;
	
	printf("enter start and end numbers");
	scanf("%d%d",&start,&end);
	
	sumof1to5(&start,&end,&sum);
	printf("%d",sum);
}
void sumof1to5(int* start,int* end,int *sum)
{
	while(*start<=*end)
	{
	*sum=*sum+*start;
	(*start)++;	
	}
}