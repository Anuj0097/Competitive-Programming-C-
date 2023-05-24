#include <bits/stdc++.h>

using namespace std;

template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template <typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type>
ostream &operator<<(ostream &os, const T_container &v)
{
    os << '{';
    string sep;
    for (const T &x : v)
        os << sep << x, sep = ", ";
    return os << '}';
}
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve()
{
    int n;
    cin >> n;
    vector<int> ari(n), bri(n), temp1(n), t2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ari[i];
        temp1[i] = ari[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> bri[i];
        t2[i] = bri[i];
    }
    sort(temp1.begin(), temp1.end());
    sort(t2.begin(), t2.end());
    temp1.erase(unique(temp1.begin(), temp1.end()), temp1.end());
    temp1.erase(unique(t2.begin(), t2.end()), t2.end());
    for (int i = 0; i < n; i++)
    {
        ari[i] = lower_bound(temp1.begin(), temp1.end(), ari[i]) - temp1.begin();
    }
    for (int i = 0; i < n; i++)
    {
        bri[i] = lower_bound(t2.begin(), t2.end(), bri[i]) - t2.begin();
    }
    int temp = 0, ans = 0;
    vector<int> s(n), r(n), e, rrc(n);
    for (int i = 0; i < n; i++)
    {
        rrc[ari[i]] = bri[i];
        s[i] = ari[i] + bri[i];
        r[bri[i]] = i;
    }
    for (int i = 0; i < n; i++)
    {
        e.insert(upper_bound(e.begin(), e.end(), rrc[i]), rrc[i]);
        s[r[rrc[i]]] -= lower_bound(e.begin(), e.end(), rrc[i]) - e.begin();
    }
    for (auto i : s)
    {
        temp = max(i, temp);
    }
    for (auto i : s)
    {
        ans += (i == temp);
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}