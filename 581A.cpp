#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b;
    if(a>=b)
    {
        c=a-b;
        d=c/2;

        cout << b << " " << d << "\n";
    }
    else if(b>=a)
    {
        c=b-a;
        d=c/2;
        cout << a << " " << d << "\n";
    }


}


