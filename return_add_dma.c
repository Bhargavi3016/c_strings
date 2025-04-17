//returning the address of dynamically allocated memory
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* blanks(int number)
{
	char* spaces=(char*)malloc(number+1);
	int i;
	for(i=0;i<number;i++)
	{
		spaces[i]=' ';
	}
	spaces[number]='\0';
	return spaces;
}
int main()
{
	printf("[%s]\n",blanks(5));
	char* temp=blanks(5);
	printf("[%s]\n",temp);
	free(temp);
}
