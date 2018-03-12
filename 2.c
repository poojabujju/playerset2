#include<stdio.h>
#include<string.h>
void main()
{
int N,K,i,j,a[10],l;
printf("Enter N and K :");
scanf("%d %d",&N,&K);
for(i=0;i<N;i++)
{
    scanf("%d",&a[i]);
}
l=strlen(a);
for(i=l-1;i;)
