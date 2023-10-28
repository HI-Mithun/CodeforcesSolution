//Even Odds
#include <stdio.h>
int main()
{
    long long int a, k;
    scanf("%lld %lld", &a, &k);
    if(k<=(a+1)/2) //Checks if kth position has odd number
    {
        printf("%lld", k*2-1);//Converting k into desired odd number
    }
    else
    {
        printf("%lld", (k-(a+1)/2)*2); //Converting k into desired even number
    }

    return 0;
}
