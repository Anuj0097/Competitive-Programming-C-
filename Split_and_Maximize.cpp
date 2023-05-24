#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#define mod 998244353
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, i, s = 0;
        cin >> n;
        ll ari[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ari[i];
            s += ari[i];
            s %= 998244353;
        }
        cout << (s * (s - 1)) % 998244353 << endl;
    }
    return 0;
}