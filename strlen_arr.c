//program to print the length of the string by user defined function in array notation
#include<stdio.h>
#include<string.h>
int my_strlen(char str[])
{	
	int i=0;
	while(str[i]!='\0')
		i++;
	return i;
}
int main()
{
	char str[100];
	printf("enter the string: ");
	scanf("%s",str);
	int length=my_strlen(str);
	printf("the length of the string is:%d\n",length);
}
