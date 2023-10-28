#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i, j, count=0, k;
    char a[100];
    for(i=0; i<=3; i++)
    {
        scanf("%d", &a[i]);
    }
    for(j=0; j<=3; j++)
    {
        for(k=j+1; k<=3; k++)
        {
            if(a[j]==a[k])
            {
                count++;
                break;
            }
        }
    }
    printf("%d", count);
}
