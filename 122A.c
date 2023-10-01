//Almost Lucky Numbers
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int n, i, count=0;
    bool a=false;
    int arr[13]={4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 774, 777};
    scanf("%d", &n);

    for(i=0; i<13 ; i++)
    {
        if(n%arr[i]==0)
        {
            a=true;
            break;
        }
    }
    if(a)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
