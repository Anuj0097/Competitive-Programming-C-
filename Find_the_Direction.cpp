#include <bits/stdc++.h>
using namespace std;
typedef int long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int df = x % 4;
        if (df == 0)
            cout << "North" << endl;
        else if (df == 1)
            cout << "East" << endl;
        else if (df == 2)
            cout << "South" << endl;
        else
            cout << "West" << endl;
    }
    return 0;
}
