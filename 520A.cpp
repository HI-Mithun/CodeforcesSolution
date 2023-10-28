#include <bits/stdc++.h>

using namespace std;
int main()
{
    int l, count=0;
    string s;
    cin >> l;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(),::tolower);
    sort(s.begin(), s.end());

    for(int i=0; i<l; i++)
    {
        if(s[i]!=s[i+1])
        {
            count++;
        }
    }
    if(count!=26)
    {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
}
