#include <bits/stdc++.h>
#define mod 1000000007;
typedef long long ll;
using namespace std;

int main()
{
    // your code goes here
    ll T;
    cin >> T;
    vector<ll> mx(1e5 + 5, 1);
    for (ll i = 1; i < 1e5 + 5; i++)
        mx[i] = (mx[i - 1] * 2) % mod;
    while (T--)
    {
        ll N;
        cin >> N;
        cout << mx[N - 1] << endl;
    }
    return 0;
}
