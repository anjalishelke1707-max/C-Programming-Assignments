void main()
{
	int arr[10],temp;
	printf("enter an eliment in array");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
    }
    for(int i=1;i<10;i++)
    {
    	for(int j=i+1;j<10;j++)
    	{
    		if(arr[i]>arr[j])
    		{
    			temp=arr[i];
    			arr[i]=arr[j];
    			arr[j]=temp;
			}
		}
	}
	printf("\n sorted array:\n");
	for(int i=1;i<10;i++)
	printf("%d ",arr[i]);
}