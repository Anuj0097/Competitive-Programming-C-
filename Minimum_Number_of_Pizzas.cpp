#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, p;
        cin >> n >> k >> p;
        int count = 0;
        k *p % n == 0;
        count++;
        cout << count << endl;
    }
    return 0;
}