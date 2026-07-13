void main()
{
	int ch;
	printf("enter charector");
	scanf("%c",&ch);
	upperlowercase(ch);
}
void upperlowercase(ch)
{
	if(ch>='A' && ch<='Z')
	printf("upper case %c",ch);
	else if(ch>='a' && ch<='z')
	printf("lower case %c",ch);
}