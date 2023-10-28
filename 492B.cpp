#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n, greater<int>());
    double d;
    for(int i=0; i<n-1; i++)
    {
        //cout << arr[i] << " ";
        if(arr[i]-arr[i+1]>d)
        {
            d = arr[i]-arr[i+1];
        }
    }
    double dis1 = arr[n-1], dis2 = l - arr[0];
    double r = max(d/2, max(dis1, dis2));
    cout << fixed <<setprecision(9) << r << endl;
}
