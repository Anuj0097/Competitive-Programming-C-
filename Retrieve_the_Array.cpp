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
        vector<size_t> a(n);
        size_t sum = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            sum += a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cout << a[i] - sum / (n + 1) << ' ';
        }
        cout << endl;
    }
    return 0;
}