#include <stdio.h>
int main()
{
    int n, m, a, b, r, rem;
    scanf("%d %d %d %d", &n, &m, &a, &b);
    if(m*a < b)
    {
        printf("%d\n", n*a);
    }
    else if(n < m)
    {
        if (n * a > b)
        {
            printf("%d\n", b);
            return 0;
        }
        else
        {
            printf("%d\n", n * a);
            return 0;
        }
    }
    else
    {
        r = n / m;
        rem = n % m;
        if (rem * a >= b)
        {
            printf("%d\n", (r * b) + b);
            return 0;
        }
        else
        {
            printf("%d\n", (r * b) + (rem * a));
            return 0;
        }
    }
}
