void main()
{
	int no;
	printf("enter no");
	scanf("%d",&no);
	int sum=perfectnoornot(no);
	
	if(sum)
        printf("Perfect Number");
    else
        printf("Not Perfect Number");
}
int perfectnoornot(int no)
{
    int i = 1, sum = 0;

    while(i < no)
    {
        if(no % i == 0)
        {
            sum = sum + i;
        }
        i++;
    }

    return sum=sum==no;
}