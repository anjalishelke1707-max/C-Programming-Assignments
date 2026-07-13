void main()
{
	int no;
	printf("enter no");
	scanf("%d",&no);
	pallindromornot(no);
}
void pallindromornot(no)
{
	int r1,r2,r3,q1;
	r1=no%10;
	q1=no/10;
	r2=q1%10;
	r3=q1/10;
	if(r1==r3)
	{
		printf("no is pallindrom");
	}
	else
	{
		printf("no is not pallindrom");
	}
}