#include <stdio.h>

int main()
{
    int n, result = 0, i, e[100000];
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &e[i]);
    }
    for(i = 0; i < n; i++)
    {
        if(e[i] == -1)
        {
            result++;
        }
        else
        {
            e[i+1] = e[i] + e[i+1];
        }
    }
    printf("%d", result);

}
