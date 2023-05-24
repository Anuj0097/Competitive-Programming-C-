#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, v;
        cin >> n >> k >> v;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            sum += temp;
        }
        ll x = ((n + k) * v) - sum;
        if (x > 0 && x % k == 0)
        {
            cout << x / k << endl;
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}