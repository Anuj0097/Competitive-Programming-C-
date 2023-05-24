#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef long long LL;
typedef pair<int, int> pii;
typedef pair<LL, LL> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<LL> vl;
typedef vector<vl> vvl;
void solve()
{
    int n, x;
    cin >> n;
    set<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.insert(x);
    }
    if ((n - a.size()) % 2 == 0)
    {
        cout << a.size() << endl;
    }
    else
    {
        cout << a.size() - 1 << endl;
    }
}

int32_t main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}