#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        std::vector<int> a(n);
        std::map<int, int> cnt;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            cnt[a[i]]++;
        }
        int cntflag = 0;
        int flag = 0;
        for (auto it : cnt)
        {
            if (it.second > (n / 2))
                flag = 1;

            if (it.second == (n / 2) && n % 2 == 0)
                cntflag++;
        }

        if (flag || cntflag == 2)
            cout << "NO\n";

        else
        {
            cout << "YES\n";
            sort(a.begin(), a.end());
            for (int i = 0; i < n; i++)
                cout << a[i] << " ";
            cout << "\n";
            for (int i = n / 2; i < n; i++)
                cout << a[i] << " ";
            for (int i = 0; i < n / 2; i++)
                cout << a[i] << " ";
            cout << "\n";
        }
    }
    return 0;
}
