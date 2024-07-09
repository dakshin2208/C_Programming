# include<stdio.h>
int main(){
	char a[100];
	gets(a);
	int i,j,n;
	for (i=0;a[i]!='\0';i+=1);
	n=i;
	i=0;
	j=n-1;
	while(i<j)
	{
		if(a[i]==a[j]){
			i+=1;
			j-=1;
		}
		else{
			break;
		}
	  }
	  if(i>j||i==j)
	    printf("it is a pallindrom");
	  else
	    printf("it is a not a pallindrom");
	   
	  
}

