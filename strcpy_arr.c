//program to copy the string using user defined strings using arrays
#include<stdio.h>
#include<string.h>
int *my_strcpy(char dest[],char src[])
{
	int i=0;
	while(src[i]!='\0')
	{
		dest[i]=src[i];
		i++;
	}
	 dest[i]='\0';//terminates the string
	// return str1;
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
