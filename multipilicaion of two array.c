#include<stdio.h>
#define N 50
int main()
{
    int a[N][N],b[N][N],C[N][N],i,j,k,m,n,p,q,sum;
    printf("enter the row and column of first matrix:\n");
    scanf("%d""%d",&m,&n);
    printf("enter first matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        	printf("the values of matrix one: ");
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the row and column of second matrix:\n");
    scanf("%d""%d",&p,&q);
    printf("enter second matrix:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
        	printf("enter the values of matrix 2:");
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nfirst matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nsecond matrix:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    if(n!=p)
    {
    	printf("can not multiply\n");
	}
	else
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{ sum=0;
				for(k=0;k<m;k++)
				{
					sum=sum+a[i][k]*b[k][j];	
				}
				C[i][j]=sum;
			}
		}
	}
    printf("the multiply of two matrix:\n");
    for(i=0;i<m;i++)
    {
    	for(j=0;j<q;j++)
    	{
    		printf("%d\t",C[i][j]);
		}
		printf("\n");
	}
    
}
