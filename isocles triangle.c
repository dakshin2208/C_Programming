#include <stdio.h>

int main() {
    int b ,h,perimeter,area;
    printf("enter the height of the triangle:");
    scanf("%d",&h);
    printf("enter the base of the triangle:");
    scanf("%d",&b);
    perimeter=(2*h+b);
    area=(b*h/2);
    printf("the area of the isoceles triangle is :%d  \n",area);
    printf("the perimeter of the isocles triangle is :%d",perimeter);
    
    
}
