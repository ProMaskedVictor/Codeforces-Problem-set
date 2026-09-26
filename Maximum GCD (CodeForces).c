#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main()
{

    int T=0,n=0,max=0;
    scanf("%d",&T);

    for(int t=1; t<=T; t++)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            max=(int)(n/2);
        }
        else
        {
            max=(int)((n-1)/2);
        }
        printf("%d\n",max);
        max=0;
    }


    return 0;
}
