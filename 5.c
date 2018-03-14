#include<stdio.h>
#include<string.h>
void main()
{
    char ch[10],k;
    int i,j,max=0,c=0;
    printf("Enter a String : ");
    scanf("%s",ch);
        for(i=0;ch[i]!='\0';i++)
    {
        for(j=i+1;ch[j]!='\0';j++)
        {
            if(ch[i]==ch[j])
            {
                c=c+1;
            }
            if(c>max)
            {
                k=ch[i];
                max=c;
            }
        }
       
    }
    printf("%c",k);
}
