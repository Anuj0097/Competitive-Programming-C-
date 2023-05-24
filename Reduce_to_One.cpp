#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> fact(1e6 + 2);
int main()
{
    fact[0] = 1;
    long long e = (1e9 + 7);
    for (int i = 1; i < fact.size(); i++)
    {
        long long temp = (fact[i - 1] * (i + 1)) % e;
        fact[i] = temp;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << (fact[n] - 1) << endl;
    }
    return 0;
}
