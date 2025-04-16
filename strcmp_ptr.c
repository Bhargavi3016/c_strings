//program to compare strings using user defined function with pointers
#include<stdio.h>
#include<string.h>
int *my_strcmp(char *str1,char *str2)
{
        while((*str1!='\0')&&(*str2!='\0')&&(*str1==*str2))
                str1++;
	str2++;
        if(*str1==*str2)
                return 0;
        else
                return (*str1-*str2);
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

