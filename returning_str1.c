//returning strings
#include<stdio.h>
#include<string.h>
char* returnALiteral(int code)
{
	switch(code)
	{
		case 1:
			return "I know everything, so,I don't want to know anything";
		case 2:
			return "I know everything,Even though i want to learn everything";
		case 3:
			return "I don't know anything,so,i don't want to know amything";
		case 4:
			return "I don't know anything,so,I don't want to know anything";
		default :
			return "I am not a human,even though animal";
	}
}
int main()
{
    int code;
    printf("Enter a code (1-4): ");
    scanf("%d", &code);
    char* result = returnALiteral(code);
    printf("Result: %s\n", result);
    return 0;
}

