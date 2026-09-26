#include<stdio.h>
int main()
{

 int n=0;
 scanf("%d",&n);


 for(int i=1; i<=n; i++)
 {


    if(i%2==0)
    {
    printf("I love");
    }
    else
    {
    printf("I hate");
    }

    if(i<n && n!=1)
    {
    printf(" that ");
    }

 }

 printf(" it");






return 0;
}
