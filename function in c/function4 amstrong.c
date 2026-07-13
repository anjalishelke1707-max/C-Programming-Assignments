int amstrongornot();
void main()
{
	int no;
	printf("enter no");
	scanf("%d",&no);
	int sum=amstrongornot(no);
	
	if(sum)
        printf("Number is Armstrong");
    else
        printf("Number is not Armstrong");
}
int amstrongornot(int no)
{
    int temp, rem, sum = 0;

    temp = no;

    while(temp > 0)
    {
        rem = temp % 10;
        sum = sum + rem * rem * rem;
        temp = temp / 10;
    }

    return sum=sum==no;
}