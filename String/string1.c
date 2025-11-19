#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    scanf("%[^\n]s",str);
    int len=0;
    while(str[len]!='\0')
    {
    	len++;
	}
    for(int i=len-1;i>=0;i--)
    {
        printf("%c",str[i]);
        
    }
}