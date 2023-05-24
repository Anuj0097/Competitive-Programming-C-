#include <bits/stdc++.h>
#define f first
#define s second
#define ll long long
#define ull unsigned long long
#define mp make_pair
#define pb push_back
#define vi vector<int>
#define ld long double
#define pii pair<int, int>
#define y1 sda
#define all(x) x.begin(), x.end()

using namespace std;
const int N = 515, mod = int(1e9) + 7;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char s[n];
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i + 1] != s[i])
                cnt++;
        }
        cout << cnt + 1 << endl;
    }
    return 0;
}