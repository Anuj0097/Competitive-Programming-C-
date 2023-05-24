#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)

            cin >> a[i];
        int cnt = ((n - 1) * (n)) / 2;

        cout << cnt << endl;
    }
    return 0;
}