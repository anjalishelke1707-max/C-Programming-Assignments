void main()
{
	int n;
	
	printf("enter the number");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		int flag=0;
		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
			flag=1;
			break;
		    }
	    }
	
		    if(flag==0)
		    printf("%d ",i);
	}
}