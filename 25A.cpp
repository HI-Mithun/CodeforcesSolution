#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int evencount=0, oddcount=0, evenindex, oddindex;
    for(int i=1; i<=n; i++)
    {
        cin >> arr[i];
        if(arr[i]%2==0)
        {
            evencount++;
            evenindex = i;
        }
        else
        {
            oddcount++;
            oddindex = i;
        }
    }

    if(evencount>oddcount)
    {
        cout << oddindex;
    }
    else
    {
        cout << evenindex;
    }


}
