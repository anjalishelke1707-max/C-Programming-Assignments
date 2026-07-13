void main()
{
	int start,end;
	printf("enter numbers");
	scanf("%d%d",&start,&end);
	sumof1to5(start,end);
}
void sumof1to5(int start,int end)
{
	int sum=0;
	while(start<=end)
	{
	sum=sum+start;
	start++;	
	}
	printf("%d",sum);
}