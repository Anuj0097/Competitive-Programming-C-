#include <bits/stdc++.h>
using namespace std;

const int N = 0;

int sum(int n)
{
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}
int main()
{

    //    #ifndef ONLINE_JUDGE
    //    freopen("input.txt","r",stdin);
    //    freopen("output.txt","w",stdout);
    //    #endif
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}