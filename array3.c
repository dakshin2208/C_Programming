#include <stdio.h>
void main(){
    int a[10],i;
    int even=0,odd =0;
    for(i=0;i<10;i++){
        printf("enter the value of %d:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        if(a[i]%2==0){
            even=even+1;
        }
        else{
            odd=odd+1;
        }
        }
    }
}
