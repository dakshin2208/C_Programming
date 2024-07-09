#include<stdio.h>
int main(){
	int n,i,count=0;
	printf("Ether the number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i+=1){
		if(n%i==0){
			count+=1;
		}
	}
	if (count==2){
		printf("%d is not composite number",n);
	}
	else
		printf("%d is composite number",n);
}

