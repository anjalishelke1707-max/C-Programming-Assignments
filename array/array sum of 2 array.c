void main()
{
	int s1=10,s2=15;
	int arr[s1];
	int brr[s2];
	
	int s3=s1>s2?s1:s2;
	int ss=s1<s2?s1:s2;
	int crr[s3];
	
	printf("enter elements in arr 1");
	for(int i=0;i<s1;i++)
	scanf("%d",&arr[i]);
	
printf("enter elements in arr 2");
	for(int i=0;i<s2;i++)
	scanf("%d",&brr[i]);	
	
	
	for(int i=0;i<ss;i++)
	{
		crr[i]=arr[i]+brr[i];
	}
	for(i=ss;i<s3;i++)
	{
	//	if(s1>s2)
	//	crr[i]=arr[i];
	//	else
	//	crr[i]=brr[i];
	crr[i]=s1>s2?arr[i]:brr[i];
	}
	for(int i=0;i<s3;i++)
	printf("%d ",crr[i]);
}