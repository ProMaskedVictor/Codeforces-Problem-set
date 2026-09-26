#include<stdio.h>
int main()
{
    char word[1000];
    scanf("%s",word);
    if((int)word[0]>=65 && (int)word[0]<=90)
    {
        printf("%s",word);
    }
    else
    {
        word[0]=(char)((int)word[0]-32);
        printf("%s",word);
    }
    return 0;
}
