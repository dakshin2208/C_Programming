#include<stdio.h>
int main()
{
	FILE *Fptr;
	Fptr = fopen("d:Aids.txt","w");
	fprintf(Fptr,"Hello world\nCount word");
	fclose(Fptr);
	
}
