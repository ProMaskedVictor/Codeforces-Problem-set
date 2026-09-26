#include<stdio.h>
int main()
{
        int n=0,p=0,v=0,t=0,count=0;
        scanf("%d",&n);

        for(int i=1;i<=n;i++)
        {

          scanf("%d%d%d",&p,&v,&t);

          if(p+v+t>=2)
          {
          count++;
          }
          printf("\n");
        }
        printf("%d",count);

    return 0;
}
