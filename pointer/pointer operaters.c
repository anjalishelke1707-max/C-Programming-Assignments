void operaters(int*no1,int*no2);
void main()
{
	int no1,no2;
	printf("Enter numbers");
	scanf("%d%d",&no1,&no2);
	operaters(&no1,&no2);
}
void operaters(int*no1,int*no2)
{
	int*add;
	int*sub;
	int*mul;
	if(*add=*no1+*no2)
	printf("add of no %d",add);
	if(*sub=*no1-*no2)
	printf("sub of no %d",sub);
	if(*mul=*no1**no2)
	printf("mul of no %d",mul);
}
	
	