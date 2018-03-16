#include <stdio.h>
int main(void) 
{
	char str[100];
	int u,v,i;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='x' && str[i]=='y' && str[i]=='z')
		{
			u=str[i];
			v=u-23;
			str[i]=v;
		}
		else
		{
		u=str[i];
		v=u+3;
		str[i]=v;
		}
	}
	printf("%s",str);
	return 0;
}
