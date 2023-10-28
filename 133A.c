//HQ9+
#include <stdio.h>
int main()
{
    char arr[100];
    scanf("%s", &arr);
    int len, i;
    len = strlen(arr);
    for(i=0; i<len; i++)
    {

        if(arr[i]=='H' || arr[i]=='Q' || arr[i]=='+')
        {
            printf("YES");
            break;
        }
        else
        {
            printf("NO");
            break;
        }
    }
}
