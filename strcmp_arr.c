//program to compare strings using user defined function with arrays
#include<stdio.h>
#include<string.h>
int *my_strcmp(char str1[],char str2[])
{
	int i=0;
	while((str1[i]!='\0')&&(str2[i]!='\0')&&(str1[i]==str2[i]))
		i++;
	if(str1[i]==str2[i])
		return 0;
	else
		return (str1[i]-str2[i]);
}
int main()
{
	char str1[100],str2[100];
	int result;
	printf("Enter first string: ");
	scanf("%s", str1);
	printf("Enter second string: ");
	scanf("%s", str2);
	result= my_strcmp(str1, str2);
     	if (result==0)
        printf("The strings are equal.\n");
       	else
	       	printf("the strings are not equal.\n");
	return 0;
}
