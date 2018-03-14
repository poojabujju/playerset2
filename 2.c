#include<stdio.h>
#include<string.h>
void main()
{
int N,K,i,t,a[10];
printf("Enter N and K :");
scanf("%d %d",&N,&K);
for(i=0;i<N;i++)
{
    scanf("%d",&a[i]);
}
    for(i=0;i<K;i++)
    {
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
    }
    for(i=0;i<N;i++)
    {
    printf("%d",a[i]);
    }
}
