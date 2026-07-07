void main()
{
	int a,b,temp;
	printf("enter two no");
	scanf("%d%d ",&a,&b);
	temp=a;
    a=b;
    b=temp;
	printf("a=%d\n",a);
	printf("b=%d ",b);
}