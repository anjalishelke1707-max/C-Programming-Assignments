void main()
{
	int no;
	printf("enter number");
	scanf("%d",&no);
	int sum=strongornot(no);
	if(sum)
	printf("number is strong");
	else
	printf("number is not strong");
}
int strongornot(int no)
{
	
	int rem,sum=0,temp=no;
	while(temp>0)
	{
		rem=temp%10;
		int fact=1,i=1;
		{
			while(i<=rem)
			{
			fact=fact*i;
			i++;
		    } 
		}
		sum=sum+fact;
		temp=temp/10;
	}
	return sum=sum==no;
	
}