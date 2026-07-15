void main()
{
	
	int arr[10],size,no;
	printf("enter an eliment in array");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
    }
    int index=-1;
    for(int i=0;i<size;i++)
    {
    	if(arr[i]==no)
    	{
    		index=i;
    		break;
		}
	}
	if(index!=-1)
	{
		for(int j=index;j<size;j++)
		{
			arr[j]=arr[j+1];
		}
	}
	else
	{
		printf("not found");
	}
}