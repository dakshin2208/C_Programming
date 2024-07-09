 #include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,j,lA,lB;
	char a[1000],b[100];
	gets(a);
	gets(b);
	lA=strlen(a);
	lB=strlen(b);
	i=0,j=0;
	while(i<lA && j<lB)
	{
		if(a[i]==b[j]){
			i+=1;j+=1;
		}
		else{
			i=i-j+1;
			j=0;
		}
}
if(j==lB)
    printf("substring is found");
else
    printf("substring is not found");
}
