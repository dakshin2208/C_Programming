#include <stdio.h>

int main() {
     int i,n,sum=0;
     printf("enter the term:");
     scanf("%d",&n);
     printf("\n the first %d natural numbers:\n",n);
     for (i=1;i<=n;i++){
         printf(" %d ",i);
         sum+=i;
         
     }
     printf("\n");
     printf("\n the sum of the given variable:%d\n",sum);
    return 0;
}
