#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, q;
        cin >> n >> m >> q;
        set<int> bus;
        bool poss = true;
        while (q--)
        {
            char ch;
            cin >> ch;
            int i;
            cin >> i;
            if (ch == '+')
            {
                if (bus.find(i) != bus.end())
                    poss = false;
                else
                {
                    bus.insert(i);
                    if (bus.size() > m)
                        poss = false;
                }
            }
            else if (ch == '-')
            {
                if (bus.find(i) == bus.end())
                    poss = false;
                else
                    bus.erase(i);
            }
        }
        if (!poss)
            cout << "Inconsistent\n";
        else
            cout << "Consistent\n";
    }
    return 0;
}