#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ll long long int
#define pb push_back
#define ps push;
#define fo(i, n) for (int i = 0; i <= n; ++i)
#define Fo(i, k, n) for (int i = k; i < n; ++i)
#define ite(x) for (auto it = x.begin(); it != x.end(); ++it)

using namespace std;
/*............STL CONTAINERS..............*/
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<ll> vl;
// typedef array arr;
typedef vector<pi> vp;
typedef map<int, int> mpi;
typedef map<ll, ll> mpl;
typedef set<int> sti;
typedef set<ll> stl;
typedef set<pi> stp;
typedef priority_queue<int, vi, greater<int>> pq;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;
        int ans1, ans2;
        if (w < 2 * n)
        {
            cout << w << " " << w << endl;
        }
        else if (w >= 2 * n && w % n == 0)
        {
            cout << w << " " << n << endl;
        }
        else
        {
            int g = w / 2;
            if (w >= 2 * n)
            {
                g = 2 * n;
            }
            int diff = INT_MIN;
            for (int i = n; i <= g; i++)
            {
                int d = w / i;
                int currdiff = (i * d) - i;
                if (currdiff > diff)
                {
                    ans1 = i;
                    ans2 = (i * d);
                    diff = currdiff;
                }
            }
            cout << ans1 << " " << ans2 << endl;
        }
    }
    return 0;
}