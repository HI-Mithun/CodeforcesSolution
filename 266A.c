#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a, count=0;
    char s[100];
    scanf("%d", &a);
    scanf("%s", &s);
    for(int j=0; j<a; j++)
    {
        if(s[j]==s[j+1])
        {
            count++;
        }
    }
    printf("%d", count);

}
