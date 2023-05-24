#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define int long long
#define ll long long
#define ld long double
#define mod 1000000007
#define PI 3.141592653589793238462
#define f first
#define s second
#define pb push_back
#define all(x) x.begin(), x.end()
#define allg(x) x.begin(), x.end(), greater<int>()
#define sz(x) (int)x.size()
using namespace std;
bool isPowerOfTwo(int n)
{
    if (n <= 0)
    {
        return false;
    }

    if (!(n & (n - 1)))
    {
        return true;
    }
    else
    {
        return false;
    }
}
void solve()
{
    string s;
    cin >> s;
    map<char, int> idx;
    for (int i = 0; i < s.size(); i++)
        idx[s[i]] = i;
    if (idx['r'] < idx['R'] && idx['g'] < idx['G'] && idx['b'] < idx['B'])
        cout << "YES\n";
    else
        cout << "NO\n";
}

int32_t main()
{

    int t = 1;
    cin >> t;
    while (t--)

        solve();

    return 0;
}