#include<stdio.h>
void main()
{
	int a[5],i;
	printf("enter the array element:");
	for (i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for (i=0;i<5;i++){
		printf("\narray element at index %d is %d",i,a[i]);
	}
	 
	
}
