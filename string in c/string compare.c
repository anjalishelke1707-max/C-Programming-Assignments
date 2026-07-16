void main()
{
	char str1[20],str2[20];
	int i=0,count=0 ,len1=0,len2=0;
	printf("enter str1 and str2");
	scanf("%s%s",str1,str2);
	printf("\nstring=%s,\nstring=%s",str1,str2);
	
	int res=	strcmp(str1,str2);
	if(res==0)
		printf("Strings are same");
	else
		printf("string are not same");
}