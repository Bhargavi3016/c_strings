#include<stdio.h>
#include<string.h>
char *staticFormat(const char* name,size_t quantity,size_t weight)
{
	static char buffer[64];
	sprintf(buffer,"name:%s quantity:%u weight:%u",name,quantity,weight);
	return buffer;
}
int main()
{
	char* part1=staticFormat("Bhargavi",22,50);
	char* part2=staticFormat("bharu",21,52);
	printf("%s\n",part1);
	printf("%s\n",part2);
}
