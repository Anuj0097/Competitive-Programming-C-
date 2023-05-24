#include <bits/stdc++.h> // Include every standard library
using namespace std;

#define B begin()
#define E end()
#define I iterator
using pii = pair<int, int>;
using vi = vector<int>;
using llu = unsigned long long int;
using ll = long long int;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int n;
       cin>>n;
       vector<int>a(2*n);
       int cntodd=0,cnteven=0;
       for(int i=0;i<n;i++){
        cin>>a[i];
        cntodd+=a[i]%2;
       }
       cnteven=n-cntodd;
       if(cnteven<cntodd){
        int res=cntodd-n/2; 
        cout<<res<<endl;
        }

       else{
        vector<int>tim;
        for(int i=0;i<n;i++){
            int x=a[i];
            if(x%2)continue;
            int cnt=0;
            while(x%2==0){
                x/=2;
                cnt++;
            }
            
        }
       }
       else {

       }
    }
    return 0;
}