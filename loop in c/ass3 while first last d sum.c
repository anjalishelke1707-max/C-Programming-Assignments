void main()
{
	int no=12345;
	int temp=no;
	int first,last,sum;
	last=no%10;
	while(temp>=10)
	{
		temp=temp/10;
	}
	first=temp;
	sum=first+last;
	printf("sum=%d",sum);
}