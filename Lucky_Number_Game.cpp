#include <bits/stdc++.h>
#include <tr1/unordered_map>
using namespace std;
using namespace std::tr1;
#define opt ios_base::sync_with_stdio(0)
#define lli long long int
#define ulli unsigned long long int
#define I int
#define S string
#define D double
#define rep(i, a, b) for (i = a; i < b; i++)
#define repr(i, a, b) for (i = a; i > b; i--)
#define in(n) scanf("%lld", &n)
#define in2(a, b) scanf("%lld %lld", &a, &b)
#define in3(a, b, c) scanf("%lld %lld %lld", &a, &b, &c)
#define out(n) printf("%lld\n", n)
#define inu(a) scanf("%lld", &a)
#define outu(a) printf("%llu", a)
#define ins(s) scanf("%s", &s)
#define outs(s) printf("%s", s)
#define mod 1000000007
#define inf 100000000000000
typedef long long ll;
typedef pair<lli, lli> plli;
typedef vector<lli> vlli;
typedef vector<ulli> vulli;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<plli> vplli;
#define MM(a, x) memset(a, x, sizeof(a));
#define ALL(x) (x).begin(), (x).end()
#define P(x) cerr << "{" #x << " = " << (x) << "}" << endl;
#define P2(x, y) cerr << "{" #x " = " << (x) << ", " #y " = " << (y) << "}" << endl;
#define P3(x, y, z) cerr << "{" #x " = " << (x) << ", " #y " = " << (y) << ", " #z " = " << (z) << "}" << endl;
#define P4(x, y, z, w) cerr << "{" #x " = " << (x) << ", " #y " = " << (y) << ", " #z " = " << (z) << ", " #w " = " << (w) << "}" << endl;
#define PP(x, i) cerr << "{" #x "[" << i << "] = " << x[i] << "}" << endl;
#define TM(a, b) cerr << "{" #a " -> " #b ": " << 1000 * (b - a) / CLOCKS_PER_SEC << "ms}\n";
#define UN(v) sort(ALL(v)), v.resize(unique(ALL(v)) - v.begin())
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define sz() size()
#define nl cout << "\n"
#define MX1 100005
#define MX2 1000005
#define bs binary_search
#define lb lower_bound
#define ub upper_bound
lli dx[] = {0, 0, -1, 1, -1, -1, 1, 1};
lli dy[] = {1, -1, 0, 0, 1, -1, -1, 1};
lli power(lli a, lli b)
{
    lli value;
    if (b == 0)
    {
        return 1;
    }
    else if (b % 2 == 0)
    {
        value = power(a, b / 2) % mod;
        return (value * value) % mod;
    }
    else
    {
        value = power(a, b / 2) % mod;
        return ((a * value) % mod * (value)) % mod;
    }
}
int main()
{
    opt;
    lli t;
    cin >> t;
    while (t--)
    {
        lli n, a, b, cnt1 = 0, cnt2 = 0, cnt3 = 0;
        cin >> n >> a >> b;
        while (n--)
        {
            lli x;
            cin >> x;
            if (x % a == 0)
            {
                cnt1++;
            }
            if (x % b == 0)
            {
                cnt2++;
            }
            if (x % a == 0 && x % b == 0)
            {
                cnt3++;
            }
        }
        if (cnt3)
        {
            cnt1++;
        }
        if (cnt1 > cnt2)
        {
            cout << "BOB" << endl;
        }
        else
        {
            cout << "ALICE" << endl;
        }
    }
    return 0;
}
