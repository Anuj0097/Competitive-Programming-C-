#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, rem = 0;
        cin >> a >> b;
        rem = a % b;
        cout << rem << endl;
    }
    return 0;
}