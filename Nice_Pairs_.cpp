
#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = " << x << endl;
#define deb2(x, y) cout << #x << " = " << x << " , " << #y << " = " << y << endl;
typedef long long ll;
typedef pair<int, int> pairs;
ll M = 10e8 + 7;

void solve()
{
    // Let's start
    ll n;
    string s;
    ll count = 0;
    cin >> n >> s;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (j - i > 9)
            {
                break;
            }

            if (j - i == abs(s[j] - s[i]))
            {
                count++;
            }
        }
    }

    cout << count << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}