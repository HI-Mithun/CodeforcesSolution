#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int tv, carry, price[1001], earn1 = 0, earn2 = 0, earn;
    cin >> tv >> carry;
    for(int i = 0; i < tv; i++)
    {
        cin >> price[i];
    }
    int temp = 0;
    sort(price, price+tv);

    for(int i=0; i < carry; i++)
    {
        if(price[i] < 1)
        {
            earn = earn + price[i];
        }
    }
    cout << abs(earn) << endl;
}
