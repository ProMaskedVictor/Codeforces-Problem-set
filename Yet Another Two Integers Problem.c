#include<stdio.h>
int main()
{

    int T=0,a=0,b=0,count=0;
    scanf("%d",&T);

    for(int t=1; t<=T; t++)
    {
        scanf("%d%d",&a,&b);
        if(a>b)
        {
            count = ((a-b)/10);
            if((a-b)%10!=0)
            {
                count++;
            }
        }
        else if(a<b)
        {
            count = ((b-a)/10);
            if((b-a)%10!=0)
            {
                count++;
            }
        }
        else
        {
            count=0;
        }
        printf("%d\n",count);
    }
    return 0;
}
