#include<stdio.h>
void main()
{
	int i;
	int a[5];
	printf("enter the element of array:");
	for (i=0;i<6;i++){
		scanf ("%d",&a[i]);
	}
	for (i=0;i<6;i++){
		printf("\narray element at index %d is %d",i,a[i]);
	}
	
	
}
