void divisibalno(int*no);
void main()
{
	int no;
	printf("enter no");
	scanf("%d",&no);
	divisibalno(&no);
	
	
}
void divisibalno(int*no)
{
	if(*no%3==0&&*no%5!=0)
	{
		printf("divisibal by 3");
	}
	if(*no%5==0&&*no%3!=0)
	{
		printf("dovisibal by 5");
	}
	if(*no%3==0&&*no%5==0)
	{
		printf("divisibal by both");
	}
}
	