#include<stdio.h>
void main()
{
    int n,k,a[1000],b[1000],i,j,l,t;
    printf("Enter N : ");
    scanf("%d",&n);
    printf("\nEnter K : ");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<k;j++)
    {
        scanf("\t%d",&b[j]);
    }
    for(j=0;j<k;j++)
    {
            if(b[j]>=t)
            {
                t=b[j];
            }
    }
    printf("The Largest Number is %d",t);
     
}
