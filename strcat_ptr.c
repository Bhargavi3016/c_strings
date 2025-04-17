//program to concatenate two strings using user defined function with pointers
#include<stdio.h>
#include<string.h>
int *my_strcat(char *dest,char *src)
{
        while(*dest!='\0')
        {
                dest++;
        }
        while(*src!='\0')
        {
                *dest=*src;
                dest++;
                src++;
        }
        *dest='\0';
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

