#include <bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); ++i)
#define for1(i, n) for (int i = 1; i <= int(n); ++i)
#define ford(i, n) for (int i = int(n) - 1; i >= 0; --i)
#define fore(i, l, r) for (int i = int(l); i < int(r); ++i)
#define forit(i, v) for (typeof((v).begin()) i = (v).begin(); i != (v).end(); ++i)
#define sz(v) int((v).size())
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define X first
#define Y second
#define mp make_pair
template <typename T>
inline T abs(T a)
{
    return ((a < 0) ? -a : a);
}
template <typename T>
inline T sqr(T a) { return a * a; }

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;

const int INF = (int)1E9 + 7;
const ld EPS = 1E-9;
const ld PI = 3.1415926535897932384626433832795;

int main()
{
    int n;
    cin >> n;

    int x = 0;
    forn(i, n)
    {
        string s;
        cin >> s;
        if (s[0] == '+')
            x++;
        if (s[0] == '-')
            x--;
        if (s[2] == '+')
            x++;
        if (s[2] == '-')
            x--;
    }
    cout << x << endl;
    return 0;
}