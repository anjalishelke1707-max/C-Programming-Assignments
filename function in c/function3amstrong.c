void main()
{
	int no;
	printf("enter no");
	scanf("%d",&no);
	amstrongornot(no);
}
void amstrongornot(no)
{
    int temp, rem, sum = 0;

    temp = no;

    while(temp > 0)
    {
        rem = temp % 10;
        sum = sum + rem * rem * rem;
        temp = temp / 10;
    }

    if(sum == no)
        printf("Number is Armstrong");
    else
        printf("Number is not Armstrong");
}