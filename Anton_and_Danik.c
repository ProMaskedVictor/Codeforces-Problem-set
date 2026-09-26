#include<stdio.h>
#include<stdlib.h>
int main()
{

    int n=0,a=0,i=0,flag=0;
    char *str;
    scanf("%d",&n);
    str=malloc(n*sizeof(char));
    scanf("%s",str);
    for(i=0;i<n; i++)
    {
        if(str[i]=='A')
        {
            a++;
        }
        if(a>(n/2))
        {
            flag=1;
            break;
        }
        else if (i-a+1>(n/2))
        {
            flag=-1;
            break;
        }
    }
    if(n>2*a || flag==-1)
    {
        printf("Danik");
    }
    else if (n<2*a || flag==1)
    {
        printf("Anton");
    }
    else
    {
        printf("Friendship");
    }
    return 0;
}
