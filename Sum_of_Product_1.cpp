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
        int n;
        cin >> n;
        int ar[n];
        int res = 0;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] == 1)
            {
                c += 1;
            }
            else
            {
                res += c * (c + 1) / 2;
                c = 0;
                res += c * (c + 1) / 2;
            }
        }
        cout << res << endl;
    }
    return 0;
}