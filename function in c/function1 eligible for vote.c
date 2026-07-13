void main()
{
	int age;
	printf("enter age");
	scanf("%d",&age);
	eligibleforvote(age);
}
void eligibleforvote(age)
{
	if(age>=18)
	{
		printf("person is eligibal to vote");
	}
	else
	{
		printf("person is not eligibal to vote");
	}
}