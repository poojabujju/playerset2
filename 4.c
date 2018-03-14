#include<stdio.h>
#include<string.h>
void main()
{
    char ch[10];
    int i,l;
    printf("Enter a String : ");
    scanf("%s",ch);
    l=strlen(ch);
    for(i=l-1;i>=0;i--)
    {
        if((ch[i]!='a')&&(ch[i]!='e')&&(ch[i]!='i')&&(ch[i]!='o')&&(ch[i]!='u'))
        {
            printf("%c",ch[i]);
        }
    
    }
  }
