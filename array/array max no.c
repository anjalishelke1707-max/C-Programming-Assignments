void main()
{
	
	int arr[10];
	printf("enter an eliment in array");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
    }
    int max=arr[0];
    for(int i=1;i<10;i++)
    {
    	if(max<arr[i])
    	max=arr[i];
	}
	printf("\nmax value %d ",max);
}