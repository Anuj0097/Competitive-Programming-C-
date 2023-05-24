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
        int s, x, y, z;
        cin >> s >> x >> y >> z;
        int temp1 = min(x, y);
        int temp2 = max(x, y);
        s -= x;
        s -= y;
        int cnt = 0;
        if (z > s)
        {
            if (z - s > temp2)
            {
                cnt += 2;
            }
            else
            {
                cnt++;
            }
        }
        else
        {
            cnt = 0;
        }
        cout << cnt << endl;
    }
    return 0;
}