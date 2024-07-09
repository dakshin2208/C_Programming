 #include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100],ch1,ch2;
    int l1,l2,i,j,k;
    printf("enter the string 1:");
    gets(s1);
    printf("enter the string 2:");
    gets(s2);
    //reverse string 1
    l1=strlen(s1);
    for(i=0;i<l1/2;i++)
    {
        ch1=s1[i];
        s1[i]=s1[l1-1-i];
        s1[l1-1-i]=ch1;
    }
    //reverse string 2
    l2=strlen(s2);
    for(j=0;j<l2/2;j++)
    {
        ch2=s2[j];
        s2[j]=s2[l2-1-j]; // fixing this line
        s2[l2-1-j]=ch2;   // fixing this line
    }
    //concatenate
    for(k=0;k<=l2;k++)
    {
        s1[l1+k]=s2[k];
    }
    printf("the concatenation of the reversed strings: %s\n",s1);
}

