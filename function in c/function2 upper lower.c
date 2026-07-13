char defineuppercase();
void main()
{
    if(defineuppercase())
	printf("upper case ");
	else 
	printf("lower case ");	
}
char defineuppercase()
{
	char ch;
	printf("enter charector");
	scanf("%c",&ch);
	return ch>='A' && ch<='Z';
	
}
