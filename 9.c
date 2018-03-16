#include<stdio.h>
void main()
{
    int a,i,j;
    printf("Enter a Number : ");
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            printf("%d\n",i);
        }
    }
}
