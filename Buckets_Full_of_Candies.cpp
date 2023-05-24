#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, m, l;
        cin >> n >> m >> l;
        long long i = n - 1;
        while (i >= 0)
        {
            m = m % (l + i);
            i = m - l;
        }
        cout << m << endl;
    }
    return 0;
}