#include<stdio.h>
#include<string.h>
void main()
{
    char ch[10][20],a[10];
    int i,j,n;
    printf("Enter the Number of Strings : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&ch[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(strlen(ch[i])<strlen(ch[j]))
            {
                strcpy(a,ch[i]);
                strcpy(ch[i],ch[j]);
                strcpy(ch[j],a);
            }
        }
    }
        for(i=0;i<n;i++)
        {
            printf("%s\t",ch[i]);
}
}
