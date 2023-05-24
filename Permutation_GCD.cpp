#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> // find_by_order,order_of_key
#define int long long
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define fr first
#define sc second
#define all(x) (x).begin(), (x).end()
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define sz(x) (int)((x).size())
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define ppc __builtin_popcount
#define ppcll __builtin_popcountll

// istream &operator>>(istream &input, vector<int> &v)
// {
//     for (auto &it : v)
//         input >> it;
//     return input;
// }
// ostream &operator<<(ostream &output, vector<int> &v)
// {
//     for (auto &it : v)
//         output << it << " ";
//     return output;
// }
// template <typename T1, typename T2>
// istream &operator>>(istream &in, pair<T1, T2> &a)
// {
//     in >> a.fr >> a.sc;
//     return in;
// }
// template <typename T1, typename T2>
// ostream &operator<<(ostream &out, pair<T1, T2> a)
// {
//     out << a.fr << " " << a.sc;
//     return out;
// }
// template <typename T, typename T1>
// T amax(T &a, T1 b)
// {
//     if (b > a)
//         a = b;
//     return a;
// }
// template <typename T, typename T1>
// T amin(T &a, T1 b)
// {
//     if (b < a)
//         a = b;
//     return a;
// }
// const int32_t M = 1e9 + 7;
const int32_t MM = 998244353;
const int N = 2 * 1e5 + 7;
const int INF = 1e17;
const int dx[4]{1, 0, -1, 0}, dy[4]{0, 1, 0, -1};
void Solve()
{
    int n, x;
    cin >> n >> x;
    if (x < n)
    {
        cout << -1 << '\n';
    }
    else
    {
        int temp = x - n + 1;
        cout << temp << " ";
        for (int i = 1; i <= n; i++)
        {
            if (i - temp)
                cout << i << " ";
        }
        cout << '\n';
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        Solve();
    }
    return 0;
}