#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t, a, b, r;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;

        if(a==b || a%b==0)
        {
            r = 0;
        }
        else if(a<b)
        {
            r = b - a;
        }
        else
        {
            r = a % b;
            r = b - r;
        }

        cout << r << endl;
    }
}
 
