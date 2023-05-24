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

    int t, n, i;
    char prev, next;
    string s;
    bool ans;

    cin >> t;

    while (t--)
    {
        ans = 1;

        cin >> n >> s;
        next = 'H';

        for (i = 0; i < n; i++)
        {
            if (s[i] != '.')
            {
                if (next == 'T' && s[i] == 'T')
                    next = 'H';
                else if (next == 'H' && s[i] == 'H')
                    next = 'T';
                else
                    ans = 0;
            }
        }

        if (next == 'T')
            ans = 0;

        if (ans)
            cout << "Valid" << endl;
        else
            cout << "Invalid" << endl;
    }

    return 0;
}