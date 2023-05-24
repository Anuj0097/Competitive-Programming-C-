#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
long long power(long long a, long long b)
{
    long long ans = 1;
    while (b > 0)
    {
        if (b % 2 == 1)
        {
            ans = (ans * a) % M;
        }
        a = (a * a) % M;
        b = b / 2;
    }
    return ans;
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        long long p = power(2, n - 1);
        p = p * x;
        p = p % M;
        cout << p << endl;
    }
    return 0;
}
