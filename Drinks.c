#include<stdio.h>
int main()
{
    int n, i;
    int a[100];
    double r, sum=0;
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);

        sum = (float)(sum+a[i]);
    }
    r=sum/n;
    printf("%0.12f", r);
}
