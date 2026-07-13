int sumof1to5();
void main()
{
	int start,end;
	printf("enter numbers");
	scanf("%d%d",&start,&end);
	
	int sum=sumof1to5(start,end);
	printf("%d",sum);
}
int sumof1to5(int start,int end)
{
	int sum=0;
	while(start<=end)
	{
	sum=sum+start;
	start++;	
	}
	return sum;
}