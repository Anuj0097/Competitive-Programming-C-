#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int, int> pii;
// typedef pair<LL, LL> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
// typedef vector<vi> vvi;
// typedef vector<pii> vii;
// typedef vector<LL> vl;
// typedef vector<vl> vvl;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int h = 0;
        map<long long, int> l;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            l[x]++;
            h = max(h, l[x]);
        }
        int ans = 0;
        if (n > 2)
        {
            if (h == 1)
                ans = n - 2;
            else
                ans = n - h;
        }
        cout << ans << endl;
    }
    return 0;
}