#include<stdio.h>
void main()
{
    // int n;
    // scanf("%d",&n);
    char str[50];
    scanf("%[^\n]",str);
    int len=0,inc=0;
    while(str[len]!='\0')
    {
        len++;
    }
    char vowel[]={65,69,73,79,85,97,101,105,111,117};
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(str[i]==vowel[j])
            inc++;
        }
    }

    printf("%d",inc);
}