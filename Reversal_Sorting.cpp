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
int solve()
{
    ll n, x;
    cin >> n >> x;
    ll ari[n];
    for (int i = 0; i < n; i++)
        cin >> ari[i];
    for (int i = 0; i < n - 1; i++)
    {
        if (ari[i] > ari[i + 1])
        {
            if (ari[i] + ari[i + 1] > x)
                return 0;
            else
                swap(ari[i], ari[i + 1]);
        }
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        if (solve())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
