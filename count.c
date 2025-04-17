//to count no of words in a string and sentences
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str[100];
	int i,wrd,sentences;
	printf("input the string:");
	scanf("%[^\n]",str);
	i=0;
	wrd=1;//assume atleast one word is there
	sentences=0;
	while(str[i]!='\0')
	{
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			wrd++;
		}
		if(str[i]=='.'||str[i]=='!'||str[i]=='?')
		{
			sentences++;
		}
		i++;
	}
	printf("total number of words in the string is:%d\n",wrd);
	printf("total no of sentences:%d",sentences);
		return 0;
}

