#include <bits/stdc++.h>

using namespace std;
int main()
{
    int S, Dragon;
    cin >> S >> Dragon;
    pair<int, int> arr[10000];
    for(int i=0; i<Dragon; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr, arr+Dragon);
    int flag = 1;
    for(int i=0; i<Dragon; i++)
    {
        if(S<=arr[i].first)
        {
            flag = 0;
            break;
        }
        S += arr[i].second;

    }

    if(flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    /*for(int i=0; i<Dragon; i++)
    {
        cout << arr[i].first << " " << arr[i].second;

        cout << endl;
    }
    */

}
