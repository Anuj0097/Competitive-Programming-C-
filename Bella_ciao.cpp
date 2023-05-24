#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long long int lli;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll D, d, P, Q;
        cin >> D >> d >> P >> Q;
        // ll ans=0,counter=0,x=0;
        // for(int i=0;i<(D/d);i++){
        //     ans+=(P+x)*d;
        //     x+=Q;
        // }
        // ans+=(P+x)*(D%d);
        ll ans = 0, N = D / d;
        ans += d * (N * (2 * P + (N - 1) * Q)) / 2;
        ans += (D % d) * (P + N * Q);
        cout << ans << "\n";
    }
    return 0;
}
