//passing string to be initialized
#include<stdio.h>
#include<string.h>
char* format(char *buffer,size_t size,const char* name,size_t quantity,size_t weight)
{
	snprintf(buffer,size,"name:%s Quantity:%u weight:%u",name,quantity,weight);
	return buffer;
}
int main()
{
	char buffer[100];
	const char* name="Bhargavi";
	size_t quantity=22;
	size_t weight=50;
	printf("%s",format(buffer,sizeof(buffer),name,quantity,weight));
	return 0;
}
