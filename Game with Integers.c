#include<stdio.h>
int main()
{

 int t=0,n=0;
 scanf("%d",&t);
 for(int i=1;i<=t;i++)
 {
 scanf("%d",&n);
 if(n%3==1||n%3==2)
 {
 printf("First\n");
 }
 else
 {
 printf("Second\n");
 }
 }
return 0;
}
