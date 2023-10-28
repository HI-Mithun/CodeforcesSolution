#include <stdio.h>
int main()
{
    int t, i, b, c, d1, d2, d3, d4, d5, d6;
    int arr;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &arr);

        d1=arr%10;
        arr=arr/10;

        d2=arr%10;
        arr=arr/10;

        d3=arr%10;
        arr=arr/10;

        d4=arr%10;
        arr=arr/10;

        d5=arr%10;
        arr=arr/10;

        d6=arr%10;

        b=d1+d2+d3;
        c=d4+d5+d6;
        if(b==c)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }


}
