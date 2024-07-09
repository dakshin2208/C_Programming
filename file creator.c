//write a c program in artificial intelligence of file name ".txt"      
#include<stdio.h>
int main()
{
	FILE *Fptr;
	char a[100];
	Fptr = fopen("Ai&ds.txt","w");
	fprintf(Fptr,"Artificial Intelligence and data science");
	fclose(Fptr);
	Fptr = fopen("Ai&ds.txt","r");
	fgets(a,100,Fptr);write
	printf("%s",a);
	fclose(Fptr);
}
