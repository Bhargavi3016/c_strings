//to count a particular character in a string
#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],ch;
	int i,c=0;
	printf("enter the string:");
	scanf("%s",s);
	printf("enter the character to count:\n");
	scanf(" %c",&ch);//the space before %c is mandatory if we don't give space it doesn't read the character
	for(i=0;s[i]!='\0';i++)
	{
		if(ch==s[i])
		{
			c++;
		}
	}
	printf("the count of the character %c occurs in the word is %d times\n",ch,c);
}
