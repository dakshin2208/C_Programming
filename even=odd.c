#include <stdio.h>
int main()
{
	int size,i,even_sum,odd_sum;
	
	printf("enter the size of the array you want:");
	scanf("%d",&size);
	
	int arr[size];
	
	printf("enter the elements:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<size;i++)
	{
		if(i%2==0)
		{
			even_sum+=arr[i];
		}
		else
		{
			odd_sum+=arr[i];
		}
	}
	if(even_sum==odd_sum)
	{
		printf("The sum of even-indexed elements is equal to the sum of odd-indexed elements");
	}
	else
	{
		printf("The sum of even-indexed elements is not equal to the sum of odd-indexed elements");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
}
