#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<int, int> pii;
typedef pair<LL, LL> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<LL> vl;
typedef vector<vl> vvl;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m[n];
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];
        }
        map<int, int> cnt;
        int mx_cnt = 0;
        for (auto i : m)
        {
            cnt[i]++;
            mx_cnt = max(mx_cnt, cnt[i]);
        }
        cout << (n - mx_cnt) << endl;
    }
    return 0;
}