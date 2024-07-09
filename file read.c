#include<stdio.h>
int main()
{
	FILE *FPtr;
	char a[100];
	FPtr = fopen("d:/Aids.txt","r");
	fgets(a,100,FPtr);
	printf("%s",a);
	fclose(FPtr);
	
}
