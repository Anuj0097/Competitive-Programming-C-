#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        ll ans1, ans2;
        cin >> n >> m;
        if (n == 1 && m == 1)
        {
            cout << "0/1"
                 << "\n";
        }
        else
        {
            ans1 = n * m;
            ans2 = ans1 / 2;

            if (ans1 == ans2 * 2)
            {
                cout << "1/2"
                     << "\n";
            }
            else
                cout << ans2 << "/" << ans1 << "\n"
                     << endl;
        }
    }
    return 0;
}
