#include<stdio.h>
void main()
{
    int arr[10]={1,2,34,5,6};
    for(int i=4;i>=0;i--)
    {
        printf("%3d",arr[i]);
    }
    printf("\n%d",arr[2]);
}