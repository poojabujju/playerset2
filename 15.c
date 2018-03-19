#include <stdio.h>
#include<string.h>

int main()
{char a[10000],c[1000];
int i,j=0,count=0,k;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
    	if(a[i]==' '&&a[i+1]==' ');
    	else
    	{
    	c[j]=a[i];
    	j++;
    }
 }

printf("%s",c);

    return 0;
}
