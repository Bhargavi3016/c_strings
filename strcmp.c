//program to compare two strings using strcmp() function
#include<stdio.h>
#include<string.h>
int main()
{
char command[16];
printf("enter the command:");
scanf("%s",command);
if(strcmp(command,"Quit")==0)
{
	printf("the command was quit\n");
}
else
{
	printf("the command was not quit\n");
}
}
