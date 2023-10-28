#include <iostream>

using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if(a==b)
    {
        if(a%2==0)
        {
            cout << "Malvika" << endl;
        }
        else
        {
            cout << "Akshat" << endl;
        }
    }
    else if(a<b && a%2==0)
    {
        cout << "Malvika" << endl;
    }
    else if (a<b && a%2!=0)
    {
        cout << "Akshat" << endl;
    }
    else if(a>b && b%2!=0)
    {
        cout << "Akshat" << endl;
    }
    else if(a>b && b%2==0)
    {
        cout << "Malvika" << endl;
    }

}
