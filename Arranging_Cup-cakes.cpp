#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int res = N - 1;
        for (int i = 1; i * i <= N; i++)
        {
            if (N % i == 0)
                res = min(res, abs(i - (N / i)));
        }
        cout << res << endl;
    }
    return 0;
}
