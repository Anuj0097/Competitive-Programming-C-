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

// double EPS = 1e-9;
// int INF = 1000000005;
// long long INFF = 1000000000000000005LL;
// double PI = acos(-1);
// int dirx[8] = {-1, 0, 0, 1, -1, -1, 1, 1};
// int diry[8] = {0, 1, -1, 0, -1, 1, -1, 1}

// #define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
// #define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
// #define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
// #define FORSQ(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a))
// #define FORC(a, b, c) for (char(a) = (b); (a) <= (c); ++(a))
// #define FOREACH(a, b) for (auto &(a) : (b))
// #define REP(i, n) FOR(i, 0, n)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r;
        cin >> r;
        int ans = r / 100;
        int rem = r % 100;
        if ((ans + rem) <= 10)
            cout << ans + rem << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}