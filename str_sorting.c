//sorting the string in ascending order
#include<stdio.h>
#include<string.h>
int main()
{
	char s[30];
	int i,j,t;
	printf("enter the string:\n");
	scanf("%s",s);
	for(i=0;s[i];i++)
	{
		for(j=i+1;s[j];j++)
		{
			if(s[i]>s[j])
			{
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
		}
	}
	printf("string after sorting:%s\n",s);
}
