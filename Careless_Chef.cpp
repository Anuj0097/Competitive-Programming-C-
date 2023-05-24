#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int sum = 0;
        int AE[n * 2];
        for (int i = 0; i < n * 2; i++)
        {
            cin >> AE[i];
            sum += AE[i];
        }
        if (sum % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
