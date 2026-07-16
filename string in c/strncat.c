#include <stdio.h>
#include <string.h>
void main()
{
	char s1[20] = "Hello ";
char s2[] = "World";
strncat(s1, s2, 3);
printf("%s", s1);
}