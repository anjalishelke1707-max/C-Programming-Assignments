#include<string.h>
void main()
{
	char str1[20];
	
	char str2[]="@gmail.com";
	printf("%s\n",str1);
	printf("%s\n",str2);
	
	int x=strlen(str1);
	printf("%d",x);
	int y=strlen(str2);
	printf("%d",x);
	
	int pos=x-y;
	int res=strcmp(str1+pos,str2);
	
}