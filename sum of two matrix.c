 #include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter the values for matrix A:");
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter the values for matrix B:");
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf("the values of matrix a:\n");
   
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
             
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("the values of matrix b\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
             
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    printf("the sum of two matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][i];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    
}
