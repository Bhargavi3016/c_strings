//returning the address of the local string
#include<stdio.h>
#include<string.h>
#define MAX_TAB_LENGTH 32
char* blanks(int number)
{
	char spaces[MAX_TAB_LENGTH];
	int i;
	for(i=0;i<number&&i<MAX_TAB_LENGTH;i++)
	{
		spaces[i]=' ';
	}
	spaces[i]='\0';
	return spaces;
}
int main()
{
	printf("[%s]\n",blanks(5));
	char* temp=blanks(5);
	printf("[%s]\n",temp);
}
