#include<stdio.h>
void main()
{
    char str[50];
    scanf("%[^\n]",str);
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    for(int i = 0;i<len;i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i] = str[i]+32;
        }
        else if (str[i]>=97 && str[i]<=122)
        {
            str[i] = str[i]-32;
        }
    }
    printf("%s",str);
}