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
	    char t;
	  	t=a[i];
	  	a[i]=a[j];
	  	a[j]=t;
	  	i+=1;
	  	j-=1;
	  }
	  printf("%s",a);
	  
}
