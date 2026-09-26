#include<stdio.h>
int main()
{
    char s[105],t[105];
    int flag=1,i=0,j=0,count=0;
    scanf("%s%s",s,t);
    for(i=0; s[i]!='\0'; i++)
    {
        if(t[i]!='\0')
        {
            count++;
        }
    }
    if(t[i]=='\0')
    {
        for(j=0; s[j]!='\0'; j++)
        {
            if(t[count-j-1]!=s[j])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }
    return 0;
}
