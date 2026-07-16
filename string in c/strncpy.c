#include <stdio.h>
#include <string.h>
void main()
{
	char s1[20];
char s2[] = "Programming";
strncpy(s1, s2, 7);
s1[7] = '\0';
printf("%s", s1);
}