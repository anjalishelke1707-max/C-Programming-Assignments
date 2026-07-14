void defineage(int*age);
void main()
{
	int age;
	defineage(&age);
    
	if(age<=12)
	{
		printf("child");
	}
	else
	{
		if(age>12 && age<=19)
		{
			printf("teenager");
		}
		else
		{
			if(age>=20 && age<=59)
			{
				printf("adult");
			}
			else
			{
				if(age>=60)
				{
					printf("senior");
				}
			}
		}
	}
}
void defineage(int*age)
{
	printf("enter age");
	scanf("%d",&age);
}