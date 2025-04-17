//c program to print individual characters in a string
#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int l=0;
	printf("enter the string:");
	scanf("%[^\n]",s);
	printf("the individual characters in a string\n");
	while(s[l]!='\0')
	{
		printf("%c ",s[l]);
		l++;
	}
	printf("\n");
}
