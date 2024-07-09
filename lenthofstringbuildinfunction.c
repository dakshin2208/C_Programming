#include<stdio.h>
#include<string.h>
int main()
{
    char name[30];
	int count=0;
    printf("enter the name:");
    gets(name);
    count=strlen(name);
    printf("string length is :%d",count);
	
}
