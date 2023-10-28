#include <iostream>
#include <string>

using namespace std;
int main()
{
    string s, a;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
        {
            i = i + 2;
            if (!a.empty() && a.back() != ' ') {
                a += ' ';
            }
        }
        else
        {
            a += s[i];
        }
    }

    cout << a << endl;
    return 0;
}
