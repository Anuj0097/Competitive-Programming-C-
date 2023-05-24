#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            if (!(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'))
            {
                temp++;
                if (temp >= 4)
                {
                    cout << "NO" << endl;
                    break;
                }
            }
            else
            {
                temp = 0;
            }

            if (i == n - 1)
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}
