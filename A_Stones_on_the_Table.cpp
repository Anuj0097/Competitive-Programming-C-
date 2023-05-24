#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll count = 0;
    ll n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        if (s[i] == s[i - 1])
            count++;
    }
    cout << count << endl;
    return 0;
}