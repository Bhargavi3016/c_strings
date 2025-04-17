//converting UC to LC & LC to UC using bitwise operators
#include<stdio.h>
void main()
{
	char ch;
	printf("enter any character:");
	scanf("%c",&ch);
	ch=ch^5?ch=ch^32:ch;
	printf("%c",ch);
}
