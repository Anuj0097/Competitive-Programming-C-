#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define F first
#define S second
#define pb push_back
#define si set<int>
#define vi vector<int>
#define pii pair<int, int>
#define vpi vector<pii>
#define vpp vector<pair<int, pii>>
#define mii map<int, int>
#define mpi map<pii, int>
#define spi set<pii>
#define endl "\n"
#define double long double
#define que_max priority_queue<int>
#define que_min priority_queue<int, vi, greater<int>>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
const int mod = 1000000007;
const int N = 1e6;

inline long long normalize(long long x, long long mod)
{
    x %= mod;
    if (x < 0)
        x += mod;
    return x;
}

int power(int a, int b)
{
    int res = 1;
    while (b)
    {
        if (b & 1)
        {
            res = (res * a) % mod;
            b--;
        }
        else
        {
            a = (a * a) % mod;
            b >>= 1;
        }
    }
    return res;
}

int GCD(int a, int b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}

int LCM(int a, int b)
{
    return (a / GCD(a, b)) * b;
}

int32_t main()
{
    //     ios_base::sync_with_stdio(0);
    //     cin.tie(0);
    //     cout.tie(0);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    int t = 1;
    cin >> t;
    cin >> ws;
    while (t--)
    {

        int n, m;
        cin >> n >> m;
        vector<vector<char>> arr(n, vector<char>(m));
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> arr[i][j];
            }
        }

        queue<pair<int, int>> q;
        q.push({9, 3});

        map<pair<int, int>, bool> visited;
        while (!q.empty())
        {
            int size = q.size();
            for (int i = 0; i < size; ++i)
            {
                pair<int, int> temp = q.front();
                visited[temp] = true;
                arr[temp.first][temp.second] = 'v';
                q.pop();
                pair<int, int> top_left = {temp.first - 1, temp.second - 1};
                pair<int, int> top_right = {temp.first - 1, temp.second + 1};
                pair<int, int> bottom_left = {temp.first + 1, temp.second - 1};
                pair<int, int> bottom_right = {temp.first + 1, temp.second + 1};
                if (visited.find(top_left) == visited.end())
                {
                    if (top_left.first >= 0 and top_left.first < n and top_left.second >= 0 and top_left.second < m and arr[top_left.first][top_left.second] != '#')
                        q.push(top_left);
                }
                if (visited.find(top_right) == visited.end())
                {
                    if (top_right.first >= 0 and top_right.first < n and top_right.second >= 0 and top_right.second < m and arr[top_right.first][top_right.second] != '#')
                        q.push(top_right);
                }
                if (visited.find(bottom_left) == visited.end())
                {
                    if (bottom_left.first >= 0 and bottom_left.first < n and bottom_left.second >= 0 and bottom_left.second < m and arr[bottom_left.first][bottom_left.second] != '#')
                        q.push(bottom_left);
                }
                if (visited.find(bottom_right) == visited.end())
                {
                    if (bottom_right.first >= 0 and bottom_right.first < n and bottom_right.second >= 0 and bottom_right.second < m and arr[bottom_right.first][bottom_right.second] != '#')
                        q.push(bottom_right);
                }
            }
        }

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}