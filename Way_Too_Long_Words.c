#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=0,i=0,count=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        char word[100];
        scanf("%s",word);

        while(word[count]!='\0')
        {
            count++;
        }
        if(count>10)
        {
            printf("%c%d%c\n",word[0],(count-2),word[count-1]);
        }
        else
        {
            printf("%s\n",word);
        }
        count=0;
    }
    return 0;
}
