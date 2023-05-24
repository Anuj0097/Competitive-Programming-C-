#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n, greater<int>());
        long long s = 0;
        for (int i = 0; i < n; i += 2)
        {
            s = s + a[i];
        }
        cout << s << "\n";
    }
}