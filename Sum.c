#include<stdio.h>
int main()
{

    int t=0,a=0,b=0,c=0,Sum=0;
    scanf("%d",&t);

    for(int i=1; i<=t; i++)
    {

        scanf("%d%d%d",&a,&b,&c);
        Sum=a+b+c;
        if(Sum==2*a||Sum==2*b||Sum==2*c)
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
