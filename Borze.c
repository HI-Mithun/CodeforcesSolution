#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n1=0;
    char arr[201];
    scanf("%s", &arr);

    for(int i=0; i<strlen(arr); i++)
    {
        if(arr[i]=='.')
        {
            n1=0;
        }
        else if(arr[i]=='-' && arr[i+1]=='.')
        {
            n1=1;
            ++i;
        }
        else if(arr[i]=='-' && arr[i+1]=='-')
        {
            n1=2;
            ++i;
        }
        else
        {
            return 0;
        }
        printf("%d", n1);
    }

}
