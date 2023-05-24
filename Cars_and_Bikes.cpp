#include <bits/stdc++.h>
using namespace std;
typedef int long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n % 4 == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}