void main()
{
	int no;
	printf("enter number");
	scanf("%d",&no);
	calculatesquareandcube(no);
}
void calculatesquareandcube(no)
{
	int s= no*no;
	int c= no*no*no;
	printf("square=%d \n",s);
	printf("cube=%d",c);
}