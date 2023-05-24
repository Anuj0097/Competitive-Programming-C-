#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> &x, pair<int, int> &y)
{
    return x.second < y.second;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back({x, 1});
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back({x, 0});
        }
        int ans = INT_MIN;
        int curr = 0;
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i].second == 1)
                curr++;
            else if (v[i].second == 0)
                curr--;
            ans = max(v[i], max);
        }
        cout << ans << "\n";
    }
}