#include<stdio.h>
int main()
{
 int T=0,n=0;
 scanf("%d",&T);

 for(int t=1;t<=T;t++)
{
scanf("%d",&n);
if(n>=1900)
{printf("Division 1\n");}

if(n>=1600 && n<=1899)
{printf("Division 2\n");}

if(n>=1400 && n<=1599)
{printf("Division 3\n");}

if(n<=1399)
{printf("Division 4\n");}

}
return 0;
}
