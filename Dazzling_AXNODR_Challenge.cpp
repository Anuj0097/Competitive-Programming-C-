#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define anuj ;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n % 4 == 3 || n % 4 == 2)
        {
            cout << "3" << endl;
        }
        else if (n % 4 == 0)
        {
            cout << 3 + n << endl;
        }
        else
        {
            cout << n << endl;
        }
    }
    return 0;
}