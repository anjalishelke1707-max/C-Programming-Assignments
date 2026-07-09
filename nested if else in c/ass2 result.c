void main()
{
	int marks=30;
	if(marks>=75)
	{
		printf("destination");
	}
	else
	{
		if(marks>=65)
		{
			printf("first class");
		}
		else
		{
			if(marks>=55)
			{
				printf("second class");
			}
			else
			{
				if(marks>=40)
				{
					printf("pass class");
				}
				else
				{
					printf("fail");
				}
			}
		}
	}
}