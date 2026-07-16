void main()
{
    char str[100];
    int i = 0, count = 0;

    printf("Enter a string: ");
    scanf("%s",str);

    while(str[i] != '\0')
    {
        count++;
        i++;
    }

    printf("revers of string: " );
    for(i=count-1;i>=0;i--)
    {
    	printf("%c",str[i]);
	}
}