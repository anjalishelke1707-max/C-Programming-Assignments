eligibleforvot();
void main()
{
	if(eligibleforvot())
	{
		printf("person is eligibal to vote");
	}
	else
	{
		printf("person is not eligibal to vote");
	}
}
int eligibleforvot()
{
	int age;
	printf("enter age");
	scanf("%d",&age);
	return age>=18;
	if(age>=18)
	{
		printf("person is eligibal to vote");
	}
	else
	{
		printf("person is not eligibal to vote");
	}
}