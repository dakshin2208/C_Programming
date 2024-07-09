#include<stdio.h>
int main()
{
	int a =10 ,b = 9,c;
	int *p,*q;
	p=&a;
	q=&b;
	c=*q;
	*p=20;
	printf("a=%d\n",a);
	printf("%x",p);
	printf("value of a = %d\n",a);
	printf("a= %d\n",p);
	printf("address of a= %x\n",&a);
	printf("address of a=%x\n",p);
	printf("address of p=%d\n",*p);
	printf("address of q=%d\n",q);
	printf("address of c=%d",c);
}
