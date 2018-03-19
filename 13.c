#include <stdio.h>
void main()
{
    char ch[15];
    int c=0,i;
    printf("Enter a String : ");
    scanf("%s",ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if((ch[i]=='0')||(ch[i]=='1')||(ch[i]=='2')||(ch[i]=='3')||(ch[i]=='4')||(ch[i]=='5')||(ch[i]=='6')||(ch[i]=='7')||(ch[i]=='8')||(ch[i]=='9'))
    {
        c++;
    }
    }
    if(c==0)
    {
        printf("No Numeric characters are present");
    }
    else
    {
        printf("Numeric characters are present");
    }
}
