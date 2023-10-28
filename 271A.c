#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, r1, r2, r3, r4, re1, re2, re3;
    scanf("%d", &n);

    while(n!=0)
    {
        n++;
        r1=n%10;
        r2=(n/10)%10;
        r3=(n/100)%10;
        r4=(n/1000)%10;
        if(r1!=r2 && r1!=r3 && r1!=r4 && r2!=r3 && r2!=r4 && r3!=r4)
        {
            break;
        }

    }
    printf("%d", n);
}
