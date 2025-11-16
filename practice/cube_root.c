#include<stdio.h>
#include<math.h>
int main()
{
    int n,crt,sq_crt;
    scanf("%d",&n);
    crt = round(cbrt(n));
    sq_crt = crt * crt * crt;
    printf("%d %d",crt,sq_crt);
    if(n==sq_crt)
    printf("Perfect Cube");
    else
    printf("Not a Cube");
    return 0;
}