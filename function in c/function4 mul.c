int foctofnum();
void main()
{
	int no;
	printf("enter number");
	scanf("%d",&no);
	int mul=foctofnum(no);
	printf("factorial of number is=%d ",mul);
}
int foctofnum(int no)
{
	int i=1,mul=1;
	while(i<=no)
	{
		mul=mul*i;
		i++;
	}
	return mul;
}