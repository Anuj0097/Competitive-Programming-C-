#include <bits/stdc++.h>
using namespace std;
/*----------------------------------------------------------------------------*/
#define endl "\n"
#define ll long long
#define all(x) (x).begin(), (x).end()
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define sz(x) (int)((x).size())
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mem0(a) memset(a, 0, sizeof(a))
#define mem1(a) memset(a, -1, sizeof(a))
#define mp(x, y) make_pair(x, y)
#define ppc __builtin_popcount
#define gcd __gcd
#define mod 1e9 + 7
#define inf 1e18
#define PI 3.1415926535897932384626433832795
/*----------------------------------------------------------------------------*/
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x, y;
        cin >> n >> x >> y;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        for (auto it : a)
        {
            pq.push(it);
        }
        while (y > 0)
        {
            ll mn = pq.top();
            if ((mn ^ x) > mn)
            {
                pq.pop();
                pq.push(mn ^ x);
                y--;
            }
            else
            {
                if ((y & 1) == 0)
                    break;
                else
                {
                    pq.pop();
                    pq.push(mn ^ x);
                    break;
                }
            }
        }
        int count = 0;
        while (!pq.empty())
        {
            a[count] = pq.top();
            pq.pop();
            count++;
        }
        for (auto it : a)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}