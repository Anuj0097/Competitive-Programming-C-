#include <bits/stdc++.h>
using namespace std;
using ld = long double;
#ifndef ONLINE_JUDGE
#define debug(x)         \
    cerr << #x << " = "; \
    deb(x);              \
    cerr << endl;
#else
#define debug(x)
#endif
#define fo(i, a, b) for (int i = a; i < b; i++)
#define of(i, a, b) for (int i = a - 1; i >= b; i--)
#define repa(i, a) for (auto &i : a)
#define int long long
#define mod 1000000007
#define md(x) (((x) % mod + mod) % mod)
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define gcd1wn totient
#define st(s) sort(s.begin(), s.end())
#define dst(s) sort(s.begin(), s.end(), greater<int>())
#define pbmp(a, b) push_back(make_pair(a, b))
#define pb push_back
#define mp make_pair
#define INFX (int)9e18
#define INFN INT_MIN
#define F first
#define S second
#define sz(s) (int)s.size()
#define input(a) \
    fo(i, 0, a.size()) { cin >> a[i]; }
#define output(a) \
    fo(i, 0, a.size()) { cout << a[i] << " "; }
#define al(x) x.begin(), x.end()
#define setp(n, val) cout << setprecision(n) << fixed << val
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef vector<pair<int, int>> vpii;
typedef map<int, int> mii;

int mod_add(int a, int b, int m)
{
    a %= m;
    b %= m;
    return ((a + b) % m + m) % m;
}
int mod_mul(int a, int b, int m)
{
    a %= m;
    b %= m;
    return ((a * b) % m + m) % m;
}
int mod_sub(int a, int b, int m)
{
    a %= m;
    b %= m;
    return ((a - b) % m + m) % m;
}

void deb(int x) { cerr << x; }
void deb(string x) { cerr << x; }
void deb(char x) { cerr << x; }
void deb(bool x) { cerr << x; }
void deb(ld x) { cerr << fixed << setprecision(15) << x; }

template <typename T, typename V>
void deb(pair<T, V> P)
{
    cerr << "{";
    deb(P.F);
    cerr << ", ";
    deb(P.S);
    cerr << "}";
}
template <typename T, typename V>
void deb(map<T, V> v)
{
    cerr << "[ ";
    repa(u, v)
    {
        deb(u);
        cerr << " ";
    }
    cerr << "]";
}
template <typename T>
void deb(vector<T> v)
{
    cerr << "[ ";
    repa(u, v)
    {
        deb(u);
        cerr << " ";
    }
    cerr << "]";
}
template <typename T>
void deb(set<T> v)
{
    cerr << "[ ";
    repa(u, v)
    {
        deb(u);
        cerr << " ";
    }
    cerr << "]";
}
template <typename T>
void deb(multiset<T> v)
{
    cerr << "[ ";
    repa(u, v)
    {
        deb(u);
        cerr << " ";
    }
    cerr << "]";
}
// g++ -std = c++17 stdc++.h
void solve()
{
    int n, m;
    cin >> n >> m;
    if ((n == 1 || m == 1))
    {
        if (n == 2 || m == 2)
            cout << "Yes\n";
        else
            cout << "No\n";
        return;
    }
    if (n % 2 == 0 || m % 2 == 0)
        cout << "Yes\n";
    else
        cout << "No\n";
}
signed main()
{
    IOS;
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    int t = 1, el = 1;
    cin >> t;
    // freopen("guess.in", "r", stdin);
    // freopen("guess.out", "w", stdout);
    while (t--)
    {
        solve();
    }
    return 0;
}