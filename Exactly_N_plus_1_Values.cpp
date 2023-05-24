#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        cout << "1 ";
        for (i = 0; i < n; i++)
            cout << (1LL << i) << " ";
        cout << endl;
    }
    return 0;
}