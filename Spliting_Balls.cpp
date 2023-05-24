#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;
#define ll long long int
#define mod 998244353
ll M = 100000007;
ll arr[1000001];
void factorial()
{
    arr[0] = 0;
    arr[1] = 1;
    for (ll i = 2; i <= 1000000; i++)
    {
        arr[i] = ((i * arr[i - 1]) % M) % M;
    }
}
int main()
{
    factorial();
    int t;
    cin >> t;
    while (t--)
    {
        ll nu;
        cin >> nu;
        ll soln = 0;
        map<ll, ll> mp;
        for (int i = 0; i < nu; i++)
        {
            int f;
            cin >> f;
            mp[f]++;
        }
        for (auto er : mp)
        {
            soln = (soln + (arr[er.first] * er.second) % M) % M;
        }
        cout << soln << endl;
    }
    return 0;
}