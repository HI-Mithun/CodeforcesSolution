#include <stdio.h>
int main()
{
    char a[1000];
    gets(a);
    int b = a[0];
    if(97<=b && b<=122)
    {
        a[0]= b-32;

    }
    printf("%s", a);

    return 0;
}
