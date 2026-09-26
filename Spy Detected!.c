#include<stdio.h>
int main()
{
    int t=0,n=0;
    scanf("%d",&t);

    for(int i=1; i<=t; i++)
    {
        scanf("%d",&n);
        int arr[n];
        for(int j=0; j<n; j++)
        {
            scanf("%d",&arr[j]);
        }
        if(n>3)
        {
            for(int k=0; k<n; k++)
            {
                if(k>=1 && k<=n-2)
                {
                    if(arr[k]!=arr[k-1] && arr[k]!=arr[k+1])
                    {
                        printf("%d\n",k+1);
                        break;
                    }
                }
                else
                {
                    if(arr[0]!=arr[1] && arr[1]==arr[2])
                    {
                        printf("1\n");
                        break;
                    }
                    else if(arr[n-2]!=arr[n-1] && arr[n-2]==arr[n-3])
                    {
                        printf("%d\n",n);
                        break;
                    }
                }
            }
        }
        else
        {
            if(arr[0]!=arr[1] && arr[1]==arr[2])
            {
                printf("1\n");
            }
            else if(arr[0]!=arr[1] && arr[1]!=arr[2])
            {
                printf("2\n");
            }
            else
            {
                printf("3\n");
            }
        }
    }

    return 0;
}
