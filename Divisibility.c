#include<stdio.h>
int main()
{

    int t=0,a=0,b=0,moves=0;;
    scanf("%d",&t);


    for(int i=1; i<=t; i++)
    {
        scanf("%d%d",&a,&b);
        moves=b-(a%b);
        if(a%b==0)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n",moves);
        }
        moves=0;
    }

    return 0;
}
