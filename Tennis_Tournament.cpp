#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;
        ll totalMatches = (n * (n - 1)) / 2;
        if (totalMatches % n)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            vector<vector<char>> v(n, vector<char>(n, '0'));
            ll noOfWins = totalMatches / n;
            for (ll i = 0; i < n; i++)
            {
                for (ll j = i + 1; j < i + 1 + noOfWins; j++)
                {
                    v[i][j % n] = '1';
                }
            }
            for (ll i = 0; i < n; i++)
            {
                for (ll j = 0; j < n; j++)
                {
                    cout << v[i][j];
                }
                cout << '\n';
            }
        }
    }
    return 0;
}
