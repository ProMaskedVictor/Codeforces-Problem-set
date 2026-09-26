#include<stdio.h>
int main()
{

int T=0,n=0;
scanf("%d",&T);
for(int t=1;t<=T;t++)
{
scanf("%d",&n);
printf("%d\n",((n%10)+(n/10)));
}
return 0;
}
