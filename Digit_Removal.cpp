#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // your code goes here
    ll a, sum = 0;
    int t, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        ll cnt = 0;
        ll num = 0;
        sum = 0;
        for (ll i = a; i > 0; i /= 10)
        {
            if (i == a)
                cnt = 1;
            else
                cnt *= 10;
            int p = i % 10;
            num += cnt * p;
            if (p == b && b == 0)
            {
                ll n = (p + 1) * cnt;
                sum += n;
            }
            else if (p == b)
            {
                ll n = (p + 1) * cnt;
                sum = n - num;
            }
        }
        cout << sum << endl;
    }
    return 0;
}