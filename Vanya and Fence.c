#include<stdio.h>

int main()
{
    int n, h, i;
    int w=0, sum, c=0, d=0;

    scanf("%d %d", &n, &h);
    int a[1000];
    for(i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);

        if(a[i]>h)
        {
            //w=2;
            c=c+2;
        }
        else
        {
            //w=1;
            d=d+1;
        }

    }
    sum=c+d;
    printf("%d", sum);
}
