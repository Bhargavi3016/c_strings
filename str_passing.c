//program to passing a string
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
unsigned int stringLength(const char* string)
{
	unsigned int len=0;
	while(*(string++))
	{
		len++;
	}
	return len;
}
int main()
{
	char simpleArray[]="simple string";
	char *simplePtr=(char*)malloc(strlen("simple string")+1);
	strcpy(simplePtr,"simple string");
	printf("%d\n",stringLength(simplePtr));
	free(simplePtr);
	printf("%d\n",stringLength(&simpleArray[0]));
}
