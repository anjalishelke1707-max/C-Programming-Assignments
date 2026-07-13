char vowelconstant();
void main()
{
if(vowelconstant())
	{
		printf("charector is vowel");
	}
	else
	{
		printf("charector is consonant");
	}	
}
char vowelconstant()
{
	char ch;
	printf("enter charector");
	scanf("%c",&ch);
	return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U';
	
}