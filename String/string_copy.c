#include<stdio.h>
#include<string.h>
void main()
{
	char str1[12] = "john";
	char str2[12] = "Potter";
	char str3[12] ;
	int i=0;
	while(str2[i]!='\0')
	{
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
	printf("%s",str2);
}