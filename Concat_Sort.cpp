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
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll idx = -1, ele = -1;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                idx = i + 1;
                ele = a[idx];
                break;
            }
        }
        if (idx == -1 || idx == n - 1)
        {
            cout << "YES" << endl;
            continue;
        }
        ll ldw;
        for (int i = 0; i < idx; i++)
        {
            if (a[i] > ele)
            {
                ldw = a[i];
                break;
            }
        }
        ll rms = a[idx - 1];
        int i;
        for (i = idx + 1; i < n; i++)
        {
            if (a[i] >= rms)
            {
                rms = a[i];
            }
            else if (a[i] <= ldw && a[i] >= ele)
            {
                ele = a[i];
            }
            else
            {
                cout << "NO" << endl;
                break;
            }
        }
        if (i == n)
            cout << "YES" << endl;
    }
    return 0;
}