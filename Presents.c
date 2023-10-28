#include <stdio.h>

int main()
{
    int n, i, j, k=1;
    int a[1000];
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[j]==k)
            {
                printf("%d\t", j+1);
                k++;
            }
        }


    }

}
