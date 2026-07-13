int totalsalery();
void main()
{
int da,ta,hra,total,basic;
	
	if(totalsalery())
	{
	   da=basic*10/100;
		ta=basic*20/100;
		hra=basic*25/100;
	}
	else
	{
		da=basic*15/100;
		ta=basic*25/100;
		hra=basic*30/100;
	}
	total=da+ta+hra+basic;
	printf("total salary %d",total);	
}
int totalsalery()
{
	int basic;
	printf("enter basic salery");
	scanf("%d",&basic);
	return basic<=5000;
}