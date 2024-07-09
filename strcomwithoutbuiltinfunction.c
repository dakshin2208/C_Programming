#include<stdio.h>
#include<string.h>
int main()
{
	int value,flag=0,i;
	char s1[20];
	char s2[20];
	printf("enter string 1:");
	gets(s1);
	printf("enter string 2:");
	gets(s2);
	for(i=0;s1[i]!='/0'||s2[i]!='/0';i++)
	{
		if(s1[i]!=s2[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("not same");
	}
	else
	{
		printf("same");
	}
}
