#include<stdio.h>
int print(int n)
{
	if(n==0)
	  return 1;
	else
	  return n*print(n-1);
	  
}
int main()
{
	int n=10;
	printf("%d",print(n));
}
