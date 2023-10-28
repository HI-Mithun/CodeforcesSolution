#include<string.h>
#include<stdio.h>

int main()
{
    char a[1000];
    int n, i, c=0, d=0;
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%s", &a[i]);

        if(a[i]=='1')
        {
            d++;
        }
        else
        {
            c++;
        }
    }
    if(d>0)
    {
        printf("HARD");
    }
    else
    {
        printf("EASY");
    }

    return 0;
}
