//program to concatenate two string using user defined function with arrays
#include<stdio.h>
#include<string.h>
int *my_strcat(char dest[],char src[])
{
	int i=0,j=0;
	while(dest[i]!='\0')
	{
		i++;
	}
	while(src[j]!='\0')
	{
		dest[i]=src[j];
		i++;
		j++;
	}
	dest[i]='\0';
}
int main()
{
	char str1[100],str2[100];
	printf("enter the first string:");
	scanf("%s",str1);
	printf("enter the second string:");
	scanf("%s",str2);
	my_strcat(str1," ");
	my_strcat(str1,str2);
	printf("concatenated string:%s\n",str1);
	return 0;
}
