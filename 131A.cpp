#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    char a;
    cin >> s;
    cin.ignore();
    bool flag = true;
    int sze = s.size();
    for(int i=1; i<sze; i++)
    {
        if(islower(s[i]))
        {
            flag = false;
        }
    }

    if(flag==true)
    {
        for(int j=0; j<sze; j++)
        {
            if(islower(s[j]))
            {
                a = toupper(s[j]);
            }
            else
            {
                a = tolower(s[j]);
            }
            cout << a;
        }
        
    }
    else
    {
        cout << s;
    }

    return 0;
}
