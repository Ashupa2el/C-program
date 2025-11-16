#include<stdio.h>
void main()
{
    int m,n,sum=0,mul=1;
    // scanf("%d %d",&m,&n);
    int arr[3][4]={{1,2,3},{4,5,6},{1,2,3}};
    // for(int i=0;i<m;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         scanf("%d",&arr[i][j]);
    //         sum = sum + arr[i][j];
    //     }
    //     // printf("\n");
    // }
    // printf("sum=%d\n",sum);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            // printf("%d\t",arr[i][j]);
            if(i == j)
            mul = mul * arr[i][j];

        }
    }
    printf("\n");
    printf("%d",mul);
}