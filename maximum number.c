#include<stdio.h>
int main(){
	int i,max,a[5];
	printf("Enter the number: \n");
	for(i=0;i<5;i+=1)
		scanf("%d",&a[i]);
	max = a[0];
	for(i=1;i<5;i+=1)
		if(a[i]>max)
			max=a[i];
	printf("Maximum number is %d\n",max);
	return 0; 
	
}
