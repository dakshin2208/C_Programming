# include<stdio.h>
int main(){
	char a[100];
	gets(a);
	int i,j;
	for (i=0;a[i]!='\0';i+=1);
	for (j=1-1;j>=0;j-=1)
	   printf("%c\n",a[j]);
}
