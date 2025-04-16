//program to find the length of the string using strlen() function
#include<stdio.h>
#include<string.h>
void main()
{
	char s[]="embedded";
	int l;
	l=strlen(s);
	printf("l=%d\n",l);
	printf("%ld\n",strlen("embedded"));
}
