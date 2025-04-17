//to count no of words in a line
#include<stdio.h>
#include<string.h>
void main()
{
	char s[200];
	int count=0,i;
	printf("enter the string:\n");
	scanf("%[^\n]",s);
	for(i=0;s[i];i++)
	{
		if(s[i]==' '&&s[i+1]!=' ')
			count++;
	}
	printf("the total no.of words are:%d\n",count+1);
}
