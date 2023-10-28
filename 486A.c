#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    long long int n, p;
    scanf("%lld", &n);
    if(n%2==0)
    {
        printf("%lld",n/2);
    }
    else
    {
        p=ceil((double)(n/2.0));
        printf("%lld", -p);
    }
    return 0;
}
