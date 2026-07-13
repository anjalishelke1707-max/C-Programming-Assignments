void main()
{
	int m;
	printf("enter minutes");
	scanf("%d",&m);
	convertminutes(m);
}
void convertminutes(m)
{
	int h=m/60;
	int rem=m%60;
	printf("hours=%d\n",h);
	printf("remaining minutes=%d/n",rem);
}