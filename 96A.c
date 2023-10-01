//Football
#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    int i, j, count=1, s;
    scanf("%s", &a);
    s=strlen(a);
    for(i=0; i<s; i++)
    {
        if(a[i]==a[i+1])
        {
            count++;
            if(count>=7)
            {
                printf("YES");
                return 0;
            }
        }
        else
        {
            count=1;
        }
    }
    printf("NO");

}
