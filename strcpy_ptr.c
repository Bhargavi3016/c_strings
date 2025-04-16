//program to copy a string using user defined function with pointers
#include<stdio.h>
#include<string.h>
int *my_strcpy(char *dest,char *src)
{
	int i=0;
	while(*src!='\0')
	{
		*dest=*src;
		dest++;
		src++;
	}
	*dest='\0';
}
int main()
{
	char src[100],dest[100];
	printf("enter the string:");
	scanf("%s",src);
	my_strcpy(dest,src);
	printf("the original string is:%s\n",src);
	printf("the string copied from src to dest is:%s\n",dest);
}
