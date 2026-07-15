void main()
{
	
	int arr[5],sum;
	printf("enter an eliment in array");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
	}
	printf("\n sum of elements: %d ",sum);	
}