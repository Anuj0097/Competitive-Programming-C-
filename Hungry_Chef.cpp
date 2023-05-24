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
        int x, y, n, r;
        cin >> x >> y >> n >> r;
        if ((r / y) >= n)
        {
            cout << 0 << " " << n << endl;
        }
        else if ((r / x) < n)
        {
            cout << -1 << endl;
        }
        else
        {
            int ad = (r - (y * n)) / (x - y);
            if ((r - (y * n)) % (x - y) != 0)
            {
                ad += 1;
            }
            cout << ad << " " << n - ad << endl;
        }
    }
    return 0;
}