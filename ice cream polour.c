// Online C compiler to run C program online
#include <stdio.h>
//ice cream polour
int main() {
    int choice;
    printf("flavour");
    printf("1.stwaberry\n");
    printf("2.chocolate\n");
    printf("3.venniala\n");
    printf("4.blue berry\n");
    do{
        printf("\nenter the coice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("you choose strawberry\n");
            printf("RS.150");
            break;
            case 2:
            printf("your chosse chocolate\n");
            printf("RS.130");
            break;
            case 3:
            printf("you choose venniala\n");
            printf("RS.120");
            break;
            case 4:
            printf("you choose blueberry\n");
            printf("RS.100");
            break;
            default:printf("invalid choice choose correctly");
            break;
        }
        }while(choice<5 && choice >0);
        
     
    }
    
    

