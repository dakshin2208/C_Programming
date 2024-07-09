#include<stdio.h>
#include<string.h>
int main()
{
	char name[100];
	int count=0,i;
	printf("enter the name:");
	gets(name);
	while(name[i]!='\0')
	{
		count++;
		i++;
	}
	printf("the length of the string:%d",count);
}
