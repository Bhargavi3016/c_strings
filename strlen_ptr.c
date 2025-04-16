//program to print the length of the string by user defined function with pointers
#include<stdio.h>
#include<string.h>
int my_strlen(char *str)
{
	int l=0;
	while(*str!='\0')
	{
		l++;
		str++;
	}
	return l;
}
int main()
{
	char str[100];
	printf("enter the string:");
	scanf("%s",str);
	int length=my_strlen(str);
	printf("the length of the string is:%d\n",length);
	return 0;
}
