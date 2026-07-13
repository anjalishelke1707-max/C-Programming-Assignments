void main()
{
	int no;
	printf("enter number");
	scanf("%d",&no);
	strongornot(no);
}
void strongornot(int no)
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
	if(sum==no)
	printf("number is strong");
	else
	printf("number is not strong");
}