//program to reverse the string
#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int i,l,c,r,j,t;
	printf("enter the string:");
	printf("\n");
	scanf("%[^\n]",s);
	l=strlen(s);
	for(i=0,c=0,r=0;i<=l;i++)
	{
		c++;
		if(s[i]==' '||s[i]=='\0')
		{
			for(j=i-1,r;r<j;r++,j--)
			{
				t=s[j];
				s[j]=s[r];
				s[r]=t;
			}
			c=0;
			r=i+1;
		}
	}
	printf("after reversing:%s",s);
	printf("\n");
}

