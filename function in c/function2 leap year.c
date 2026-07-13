int leapyearornot();
void main()
{
	if(leapyearornot())
	{
		printf("leap year");
	}
	else
	{
		printf("not leap year");
	}
}
int leapyearornot() 
{
	int year;
	printf("enter year");
	scanf("%d",&year);
	return year%4==0 && year%100!=0||year%400==0;
}