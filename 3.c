#include<stdio.h>
int main()
{
    int n,i,r,rem=0,sum=0;
    printf("Enter a Number : ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        rem=rem+r;
        sum=sum+(r*r);
        n=n/10;
         }
         printf("%d",sum);
}
