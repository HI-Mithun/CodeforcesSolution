#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[100];
    gets(s);
    int a=strlen(s);
    //printf("%d\n", a);
    for(int i=0; i<strlen(s); i++)
    {
        for(int j=i+1; j<strlen(s); j++)
        {
            if(s[i]==s[j])
            {
                a=a-1;
                break;
            }
        }
    }
    //printf("%d\n", a);
    if(a%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
    return 0;

}
