#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        int cnt = 0;
        for (int i = 0; i < n; i++)
            if (arr[i] == arr[i + 1] or arr[i] > n)
                cnt++;
        cout << cnt << endl;
    }
    return 0;
}
