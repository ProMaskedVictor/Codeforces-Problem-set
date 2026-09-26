#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n=0,p=0,q=0,max_x=0,max_y=0,count=0;
    bool flag=false;
    scanf("%d",&n);
    scanf("%d",&p);
    int x[p];
    for(int i=0; i<p; i++)
    {
        scanf("%d",&x[i]);
    }
    scanf("%d",&q);
    int y[q];
    for(int i=0; i<q; i++)
    {
        scanf("%d",&y[i]);
    }
    for(int i=0; i<q; i++)
    {
        for(int j=0; j<p; j++)
        {
            if(y[i]==x[j])
            {
                flag=true;
                break;
            }
        }
        if(flag==false)
        {
            count++;
        }
        else
        {
            flag=false;
        }
    }
    if(count==n-p)
    {
        printf("I become the guy.");
    }
    else
    {
        printf("Oh, my keyboard!");
    }
    return 0;
}
