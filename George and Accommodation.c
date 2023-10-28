#include<stdio.h>

int main()
{
    int n, i, a=0, p, q;
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d %d", &p, &q);
        if(q-p >= 2)
        {
            a++;
        }
    }
    printf("%d", a);

    return 0;
}
