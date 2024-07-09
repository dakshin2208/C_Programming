#include<stdio.h>
#include<string.h>
int main()
{
	int value;
	char s1[20];
	char s2[20];
	printf("enter string 1:");
	gets(s1);
	printf("enter string 2:");
	gets(s2);
	value=strcmp(s1,s2);
	//printf("%d",value);
	if(value==0){
		printf("same");
	}
	else{
		printf("not same");
	}
}
