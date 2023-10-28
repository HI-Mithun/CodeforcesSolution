#include<string.h>
#include<stdio.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int l, i, j, d=0;
    l=strlen(a);
    for(i=l-1, j=0; i>=0, j<=l-1; i--, j++)
    {

        if(a[j]==b[i])
        {
            d++;
        }

    }
    if(l==d)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

}
