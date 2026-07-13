void main()
{
	int ch;
	printf("enter charector");
	scanf("%c",&ch);
	vowelorconsonent(ch);
}
void vowelorconsonent(ch)
{
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("charector is vowel %c",ch);
	}
	else
	{
		printf("charector is consonant %c",ch);
	}
}