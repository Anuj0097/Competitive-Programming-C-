#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

void anuj(string &we, int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char j = 'A'; j <= 'Z'; j++)
        {
            for (int k = 0; k < i; k++)
            {
                we.push_back(j);
            }
        }
        if (we.size() >= n)
        {
            break;
        }
    }
}
signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    int nt = 1;
    while (t--)
    {
        int n;
        cin >> n;
        string we = "";

        anuj(we, n);
        cout << "Case #" << nt << ": "
             << we[n - 1] << endl;

        nt++;
    }

    return 0;
}