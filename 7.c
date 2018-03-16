#include <stdio.h>
void main()
{
    int a,b,c,i;
    printf("Enter two Numbers : ");
    scanf("%d %d",&a,&b);
    for(i=2;i<=b;i++)
    {
    if(a%i==0 && b%i==0)
    {
        printf("\t%d\n",i);
        
    }
    
}
}
