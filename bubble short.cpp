#include <stdio.h>

void main() {
    int i, j,n,temp;
    
    printf("Enter the elements : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d element : \n",n);
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    	for (i=0;i<n-1;i++)
		{ 
	    	for(j=0;j<n-i-1;j++)
			{
	            if (a[j]>a[j+1])
				{
	                temp = a[j];
	                a[j] = a[j+1];
	                a[j+1] = temp;
	           	}
	        }
	    }
    for (j=0;j<n;j++)
		printf("%d ",a[j]);
}
