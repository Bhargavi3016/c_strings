//program to copy the string using strcpy() function
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char name[32];
char *names[30];
short int count=0;
printf("enter a name:");
scanf("%s",name);
names[count]=(char*)malloc(strlen(name)+1);
strcpy(names[count],name);
printf("the copied string is:%s\n",names[count]);
count++;
for(int i=0;i<count;i++)
{
	free(names[i]);
}
return 0;
}
