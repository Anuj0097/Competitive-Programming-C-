#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[ar[i]]++;
    }
    // for (auto it : mp)
    // {
    //     cout << it.first << "->" << it.second << endl;
    // }
    int q;
    cin >> q;
    while (q--)
    {
        int no;
        cin >> no;
        cout << mp[no] << endl;
    }
    return 0;
}
