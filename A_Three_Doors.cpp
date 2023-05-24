
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

/*template<typename... T>
void read(T&... args)
{
    ((cin>>args), ...);
}
template<typename... T>
void write(T&&... args)
{
    ((cout<<args<<" "), ...);
}
*/
void Sieve(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (prime[i])
        {
            for (int j = 2; j * i <= n; j++)
                prime[i * j] = false;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
            cout << i << endl;
    }
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int x, a, b, c;
        cin >> x >> a >> b >> c;
        if ((a < b && b < c) or (a > b && b > c))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}