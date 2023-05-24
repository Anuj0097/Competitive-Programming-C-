#include <bits/stdc++.h> // Include every standard library
using namespace std;

#define B begin()
#define E end()
#define I iterator
using pii = pair<int, int>;
using vi = vector<int>;
using llu = unsigned long long int;
using ll = long long int;
int main()
{
    ll n;
    cin >> n;
    vector<ll> vec(n);
    ll val;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        vec[i] = val;
    }
    sort(vec.B, vec.E, greater<ll>());
    ll ansa = 0, ansb = 0;
    ansa = vec[0];
    for (int i = 1; i < n; i++)
    {
        if (ansb < ansa)
            ansb += vec[i];
        else
            ansa += vec[i];
    }
    cout << max(ansa, ansb) - min(ansa, ansb);
    return 0;
}