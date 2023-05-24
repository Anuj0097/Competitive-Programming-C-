#include <bits/stdc++.h>
using namespace std;
int main()
{

    int T, N, X, i;
    cin >> T;
    while (T)
    {
        cin >> N >> X;
        int arr[N];
        for (i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        int max = 0;
        for (i = N - 1; i >= 0; i--)
        {
            if (arr[i] < X)
            {
                max = i + 1;
                break;
            }
        }
        cout << max << endl;
        T -= 1;
    }
}