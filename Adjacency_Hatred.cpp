#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
    
        cin >> n;
        vector<int> even, odd;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a % 2)
            {
                even.push_back(a);
            }
            else
            {
                odd.push_back(a);
            }
        }
        if (even.empty() || odd.empty())
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i : even)
            {
                cout << i << ' ';
            }
            for (int i : odd)
            {
                cout << i << ' ';
            }
            cout << "\n";
        }
    }
    return 0;
}