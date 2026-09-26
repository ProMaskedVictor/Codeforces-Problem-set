#include<stdio.h>
int main()
{

    int T=0,t=0;
    char str[4];
    scanf("%d",&T);
    for(t=0; t<T; t++)
    {
     scanf("%s",str);
     if((str[0]=='Y'||str[0]=='y') && (str[1]=='E'||str[1]=='e') && (str[2]=='S'||str[2]=='s') && str[3]=='\0')
     {
     printf("YES\n");
     }
     else
     {
     printf("NO\n");
     }
    }
    return 0;
}
