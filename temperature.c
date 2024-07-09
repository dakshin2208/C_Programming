// Online C compiler to run C program online
#include <stdio.h>
int main(){
    int temperature;
    printf("enter the temperature:");
    scanf("%d",&temperature);
    if (temperature==0 && temperature <=10){
        printf("temperature %d is very cold",temperature);
    } else if (temperature<0){
        printf("temperature %d is freezing weather",temperature);
    } else if(temperature>10 && temperature<=20){
        printf("temperature %d is cold",temperature);
    }else if (temperature >20 && temperature<=30){
        printf("temperature %d is normal temperature",temperature);
    }else if (temperature>30 && temperature <=40){
        printf("temperature %d is  hot",temperature);
    } else if (temperature>40){
        printf("temperature %d is very hot",temperature);
}
}
