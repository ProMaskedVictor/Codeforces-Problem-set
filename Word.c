#include<stdio.h>
#include<string.h>
int main()
{
    int lower=0,upper=0,i=0;
    char word[105],Upper[105],Lower[105];
    scanf("%s",word);
    strcpy(Upper,word);
    strcpy(Lower,word);
    while(word[i]!='\0')
    {
        if(word[i]>='A' && word[i]<='Z')
        {
            upper++;
            Lower[i]=word[i]+32;
        }
        else
        {
            lower++;
            Upper[i]=word[i]-32;
        }
        i++;
    }
    Upper[i]='\0';
    Lower[i]='\0';
    if(lower==0 || upper==0)
    {
        printf("%s",word);
    }
    else
    {
        if(lower>=upper)
        {
            printf("%s",Lower);
        }
        else
        {
            printf("%s",Upper);
        }
    }

    return 0;
}
