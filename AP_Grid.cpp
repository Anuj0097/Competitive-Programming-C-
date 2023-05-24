#include <bits/stdc++.h>
using namespace std;
// typedef long long LL;
// typedef pair<int, int> pii;
// typedef pair<LL, LL> pll;
// typedef pair<string, string> pss;
// typedef vector<int> vi;
// typedef vector<vi> vvi;
// typedef vector<pii> vii;
// typedef vector<LL> vl;
// typedef vector<vl> vvl;

void anuj1(int n, int m)
{
    for (int i = 0; i < m; i++)
    {
        cout << i + 1 << " ";
        cout << endl;
    }
    int fd = 1 + n + 1;
    for (int i = 1; i < n; i++)
    {
        int mm = fd;
        cout << mm << " ";
        for (int j = 1; j < m; j++)
        {
            cout << mm + i + 1 << " ";
            mm += i + 1;
        }
        fd += n + 1;
        cout << endl;
    }
}
void anuj2(int n, int m)
{
    int df;
    for (int i = 0, a = m + 1; i < n; i++, a++)
    {
        df = i + 1;
        cout << df << " ";
        for (int j = 1; j < m; j++)
        {
            cout << df + a << " ";
            df += a;
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (n < m)
        {
            anuj1(n, m);
        }
        else
        {
            anuj2(n, m);
        }
    }
    return 0;
}