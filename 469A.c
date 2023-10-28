#include <stdio.h>
int main()
{
    int t, i, f=0, j, x, y;
    int a[250];
    scanf("%d", &t);
    scanf("%d", &x);
    for(i=0; i<x; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &y);
    for(i=x; i<(x+y); i++)
    {
        scanf("%d", &a[i]);
    }
    for(j=1; j<=t; j++)
    {
        for(i=0; i<(x+y); i++)
        {
            if(j==a[i])
            {
                f++;
                break;
            }
        }


    }
    if(f==t)
    {
        printf("I become the guy.");
    }
    else
    {
        printf("Oh, my keyboard!");
    }

}
