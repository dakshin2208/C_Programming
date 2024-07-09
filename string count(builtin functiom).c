#include<stdio.h>
#include<string.h>
int main()
{
	char name[20],count=0,i;
	printf("enter the name:");
	gets(name);
	//count=strlen(name);
	//printf("the count of the entered string:%d",count);
	while(name[i]!='\0')
	{
		count++;
		i++;
	}
	printf("the count of the entered string:%d",count);
	
}
