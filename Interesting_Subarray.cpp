#include <bits/stdc++.h> // Include every standard library
using namespace std;

#define B begin()
#define E end()
#define I iterator
using pii = pair<int, int>;
using vi = vector<int>;
using llu = unsigned long long int;
using ll = long long int;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> ari(n);
    ll mn = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> ari[i];
        if (ari[i] >= 0 && mn > ari[i])
        {
            mn = ari[i];
        }
    }

    ll mnn = *min_element(ari.begin(), ari.end());
    ll mxx = *max_element(ari.begin(), ari.end());
    if (mn == LLONG_MAX)
    {
        cout << mxx * mxx << " " << mnn * mnn << endl;
    }
    else
    {
        if (mnn < 0)
        {
            cout << mnn * mxx << " " << max(mxx * mxx, mnn * mnn) << endl;
        }
        else
        {
            cout << mnn * mnn << " " << mxx * mxx << endl;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}