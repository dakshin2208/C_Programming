 #include<stdio.h>
#include<string.h>
void main()
{
	/*char s1[100];
	int l;
	printf("enter the string:");
	gets(s1);
	l=strrev(s1);
	printf("the reverse of the string:%s",l);
	
	
    /*char s1[20],c;
    int l,i;
    printf("enter the string:");
    gets(s1);
    l=strlen(s1);
    for(i=0;i<l/2;i++)
    {
        c=s1[i];
        s1[i]=s1[l-1-i];
        s1[l-1-i]=c;
    }
    printf("the reverse of the string:%s",s1);*/
    
    
    char s1[100],c;
    int l,i,j;
    printf("enter the string:");
    gets(s1);
    l=strlen(s1);
    for (i = 0, j = l - 1; i < j; i++, j--)
    {
    	c=s1[i];
    	s1[i]=s1[l-1-i];
    	s1[l-1-i]=c;

	}
	printf("the reverse string:%s",s1);
    
    
}
