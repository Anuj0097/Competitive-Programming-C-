
#include<bits/stdc++.h>
using namespace std;

#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
 
#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef long long int lli;
typedef long double ld;
typedef complex<ld> cd;
 
typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<lli,lli> pli;
typedef pair<ld,ld> pd;
 
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<lli> vli;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<pli> vpli;
typedef vector<cd> vcd;
 
template<class T> using pq = priority_queue<T>;
template<class T> using pqg = priority_queue<T, vector<T>, greater<T>>;
 
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)
#define trav(a,x) for (auto& a : x)
#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)
 
#define sz(x) (int)(x).size()
#define mp make_pair
#define em emplace_back
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define er equal_range
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
#define gt greater<int>()
#define gtp greater<pair<int, int>>()
 
template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ", "; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? ", " : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifdef DEBUG
#define dbg(x...) cerr << "\e[91m"<<__func__<<":"<<__LINE__<<" [" << #x << "] = ["; _print(x); cerr << "\e[39m" << endl;
#else
#define dbg(x...)
#endif


/*=======================================================================================================================*/ 
/*=======================================================================================================================*/


const int MOD = 1000000007;
const char nl = '\n';
const int MX = 100001; 

 
void solve() {
    int a[10];
    for(int i=1; i<=10; i++){
        cin>>a[i];
    }
    int cnta=0, cntb=0;
    for(int i=1; i<=10; i++){
        if(i%2 == 0){
            if(a[i] == 1){
                cntb++;
            }
        }
        else{
            if(a[i] == 1){
                cnta++;
            }
        }
    }
    if(cnta>cntb){
        cout<<"1\n";
    }
    else if(cnta == cntb){
        cout<<"0\n";
    }
    else{
        cout<<"2\n";
    }
}
 
int main() {
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0);
    cin.exceptions(cin.failbit);
 
    int T;
    cin >> T;
    while(T--) {
        solve();
    }
 
	return 0;
}
 
