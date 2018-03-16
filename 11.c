
#include <stdio.h>
void main() 
{
int a[2],b[2],c[2],i,f=0;
for(i=0;i<2;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<2;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<2;i++)
{
scanf("%d",&c[i]);
}
for(i=0;i<2;i++)
{
if(a[0]==b[0] && b[0]==c[0])
f=1;
}
if(f==1)
printf("yes");
else
printf("no");
}
