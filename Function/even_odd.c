#include<stdio.h>
void main()
{
    void evenOdd();
    evenOdd();
}
void evenOdd()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("its even");
    }
    else printf("odd");
}