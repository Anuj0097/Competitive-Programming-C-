#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, e) for (int i = 0; i < e; i++)
#define mod 1000000007
#define N 10001
// success is bound to come just:Have Patience Keep Focus Don't Distract Keep Hustling.
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    forn(i, n) cin >> arr[i];
    int i = 0, j, count;
    while (i < n)
    {
        j = i;
        count = 0;
        while (j < n - 1)
        {
            if (arr[j] + 1 == arr[j + 1])
            {
                count++;
                j++;
            }
            else
                break;
        }
        if (count >= 2)
        {
            cout << arr[i] << "..." << arr[i + count];
            i = i + count + 1;
        }
        else
        {
            cout << arr[i];
            i++;
        }
        if (i < n)
            cout << ',';
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
