#include <stdio.h>

int main()
{
    int n, t, count = 0, number = 1, i;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        for(i=1; ; i++)
        {
            if(i%3==0 || i%10==3)
            {
                continue;
            }
            else
            {
                --n;
                if(n==0)
                {
                    printf("%d\n", i);
                    break;
                }
            }
        }
    }
    return 0;

}
