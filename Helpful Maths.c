#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char s[100];
    gets(s);
    for(int i=0; i<=strlen(s); i+=2)
    {
        for(int j=i+2; j<strlen(s); j+=2)
        {
            int n=s[i];

            if(s[i]>s[j])
            {
                s[i]=s[j];
                s[j]=n;
            }

        }
    }
    puts(s);
}
