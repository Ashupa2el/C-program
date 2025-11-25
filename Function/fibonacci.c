#include<stdio.h>
void main()
{
    void fibonacci();
    fibonacci();
}
void fibonacci()
{
    int n;
    scanf("%d",&n);
    int a=0,b=1;
    int c=a+b;
    for(int i=1;i<=n;i++)
    {
        printf("%d",a);
        a = b;
        b = c;
        c = a+b;
    }
}