int seriesof1to10();
void main()
{
	int i;
	printf("enter number");
	scanf("%d",&i);

    int x=seriesof1to10(i);
    printf("%d ",x);
}
int seriesof1to10(int i)
{
	int x;
	while(i<=10)
	{
	 x=i++;
	}
	return x;
}