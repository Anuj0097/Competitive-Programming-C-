#include <bits/stdc++.h>
#define fi first
#define se second
#define ll long long
#define pb push_back
#define sz(a) (int)a.size()
// #define crep(i, n) for (int i = 0; i < n; i++)
// #define rep(i, x, n) for (int i = x; i < n; i++)
using namespace std;
using pii = pair<int, int>;
using vi = vector<int>;

int main()
{
    ll s;
    cin >> s;
    while (s--)
    {
        ll f, h;
        ll i = -1;
        cin >> f >> h;
        if (f % 2 == 0)
        {
            if ((f + 2) <= h)
                cout << f << " " << f + 2;
            else
                cout << i;
        }
        else if (f % 3 == 0)
        {
            if ((f + 3) <= h)
                cout << f << " " << f + 3;
            else
                cout << i;
        }
        else
        {
            if ((f + 3) <= h)
                cout << f + 1 << " " << f + 3;
            else
                cout << i;
        }

        cout << endl;
    }
    return 0;
}
