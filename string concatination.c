#include<stdio.h>
#include<string.h>
//strcat(s1,s2);
//printf("%s",s1);
void main()
{
	int len1,len2,i;
	char s1[20];
	char s2[20];
	printf("enter the first string:");
	gets(s1);
	printf("enter the second string:");
	gets(s2);
	len1=strlen(s1);
	len2=strlen(s2);
	for(i=0;i<=len2;i++)
	{
		s1[len1+i]=s2[i];
	}
	printf("%s",s1);
	
	
	
}
