#include <stdio.h>


int main()
{
    int n, k, c, sum=0, d, i, count=0;
    scanf("%d %d", &n, &k);//k=222
    d=240-k;
    for(i=1; i<=n; i++)//n=3
    {
        c=5*i;//c=5, c=10, c=15
        sum=sum+c;
        count++;
        if(sum>d)
        {
            count=count-1;//sum=5, sum=15, sum=25
        }
    }
    if(sum<d || sum==d)
    {
        printf("%d", n);
    }
    else if(sum>d)
    {
        printf("%d", count);
    }
}
