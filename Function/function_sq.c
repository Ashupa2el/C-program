#include<stdio.h>
void main()
{
    void sq();
    sq();
}
void sq()
{
    int n;
    scanf("%d",&n);
    printf("%d",n*n);
}