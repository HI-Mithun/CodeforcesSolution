#include<stdio.h>
int main()

{
    int a, b, i;
    scanf("%d %d", &a, &b);
    if(a<=b)
    {
        for(i=1; i<=10; i++)
        {
            a=a*3;
            b=b*2;
            if(a>b)
            {
                break;
            }
        }
    }
    printf("%d", i);
}
