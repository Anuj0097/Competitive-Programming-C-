#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, t;
        cin >> n;
        ll arr[n + 2];
        for (ll i = 0; i < n; i++)
            cin >> arr[i + 1];
        // arr[0] = 0;
        arr[n + 1] = 0;
        for (ll i = 1; i <= n; i++)
            cout << max(arr[i] & arr[i + 1], arr[i - 1] & arr[i]) << " ";
        cout << "\n";
    }
    return 0;
}
