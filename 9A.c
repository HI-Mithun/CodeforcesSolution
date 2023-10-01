#include <stdio.h>
int main()
{
    int a, b, large, count=0, i;
    scanf("%d %d", &a, &b);
    if(a>b)
    {
        large=a;
    }
    else
    {
        large=b;
    }
    for(i=large; i<=6; i++)
    {
        count++;
    }
    if(count==6)
    {
        printf("1/1");
    }
    else if(count==5)
    {
        printf("5/6");
    }
    else if(count==4)
    {
        printf("2/3");
    }
    else if(count==3)
    {
        printf("1/2");
    }
    else if(count==2)
    {
        printf("1/3");
    }
    else if(count==1)
    {
        printf("1/6");
    }
    else
    {
        printf("0/1");
    }
}
