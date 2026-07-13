int defineage();
void main()
{
	int age;
    age=defineage();
    
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
int defineage()
{
	int age;
	printf("enter age");
	scanf("%d",&age);
    return age;
}