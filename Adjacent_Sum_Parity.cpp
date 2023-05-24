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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int x = 0;
            cin >> x;
            if (x == 0)
            {
                cnt++;
            }
        }
        cout << (((n - cnt) % 2 == 0) ? "YES" : "NO") << endl;
    }
    return 0;
}