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
    
    printf("even numbers:");
    for(int i=0;i<10;i++)
    {
    	if( arr[i]%2==0)
    	printf(" %d ",arr[i]);
    }
    
    printf("odd numbers:");
    for(int i=0;i<10;i++)
    {
    	if(arr[i]%2!=0)
    	printf("%d ",arr[i]);
	}
}