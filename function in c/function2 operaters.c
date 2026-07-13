int add();
void main()
{
	printf("Enter 1 for addition \n 2 for substraction \n 3 for diviision \n 4 for multiplication");
	int choice;
	scanf("%d",&choice);
	
	if(choice==1)
	{
		int x=	add();
		printf("%d",x);l
	}
	else if(choice==2)
	{
		sub();
	}
	
	
}


int add()
{
	int no1,no2;
	printf("Enter numbers");
	scanf("%d%d",&no1,&no2);
	int res=no1+no2;
	return res;
}

int sub()
{
	int no1,no2;
	printf("Enter numbers");
	scanf("%d%d",&no1,&no2);
	return no1-no2;
}