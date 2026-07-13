void main()
{
	int no;
	printf("enter number");
	scanf("%d",&no);
	foctofnum(no);
}
void foctofnum(int no)
{
	int i=1,mul=1;
	while(i<=no)
	{
		mul=mul*i;
		i++;
	}
	printf("factorial of number is=%d ",mul);
}