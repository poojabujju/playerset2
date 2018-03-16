#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,ar[37];
    scanf("%d\n",&n);

    int i,l,j,c=0;
    for(i=0;i<n;i++)
    {
        char s[100];
        int count=0;
        gets(s);
        l=strlen(s);
        for(j=0;j<36;j++)
            ar[j]=0;
        for(j=0;j<l;j++)
        {
            ar[s[j]-'a']+=1;
        }

         for(j=0;j<36;j++)
            count=count+ar[j];

        if(count==6)
        {
            if(ar[0]==2 && ar[1]==1 && ar[11]==1 &&ar[8]==1 && ar[10]==1 )
            c++;
        }
        
    }
    printf("%d",c);
    return 0;
}
