#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, ans;
    cin >> t;
    while (t--)
    {
        int n, v, ar[1000], ar1[1000];
        cin >> n >> v;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        vector<pair<int, int>> p;
        for (int i = 0; i < n; i++)
        {
            cin >> ar1[i];
            p.push_back(make_pair(ar[i], ar1[i]));
        }
        sort(p.begin(), p.end());
        ans = v;
        for (int i = 0; i < n; i++)
        {
            if (p[i].first <= ans)
            {
                ans = ans + p[i].second;
            }
            else if (p[i].first > ans)
            {
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}