void main()
{
	int no;
	printf("enter number");
	scanf("%d",&no);
	int rev=pallindromornot(no);
	
	if(rev)
	printf("number is pallindrom");
	else
	printf("number is not pallindrom");
}
int pallindromornot(int no)
{
	int temp=no;
	int rem,rev=0;
	while(temp>0)
	{
		rem=temp%10;
		rev=rev*10+rem;
		temp=temp/10;
	}
	return rev=rev==no;
	
}