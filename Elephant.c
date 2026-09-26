#include<stdio.h>
int main()
{
        int x=0,count=0;
        scanf("%d",&x);

         while(x!=0)
         {
          if(x>=5)
         {
         count++;
         x=x-5;
         }
         else if(x>=1&&x<=4)
         {
         count++;
         x=0;
         }
         }
         printf("%d",count);
         return 0;
}
