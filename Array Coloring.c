#include<stdio.h>
int main()
{
    int t=0,n=0,Sum=0;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d",&n);

        int arr[n];

        for(int j=0; j<n; j++)
        {
            scanf("%d",&arr[j]);
            Sum+=arr[j];
        }
        if(Sum%2==0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        Sum=0;
    }
    return 0;
}
