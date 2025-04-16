//program to concatenate two strings using strcat() function
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char* error="ERROR";
	char* errorMessage="NOT ENOUGH MEMORY";
	char* buffer=(char*)malloc(strlen(error)+strlen(errorMessage)+1);
	strcpy(buffer,error);
	strcat(buffer," ");
	strcat(buffer, errorMessage);
	printf("%s\n",buffer);
	printf("%s\n",error);
	printf("%s\n",errorMessage);
	free(buffer);
}
