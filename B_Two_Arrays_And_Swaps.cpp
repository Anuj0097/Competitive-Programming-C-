#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
      int n,k;
      cin>>n>>k;
      ll a[n+1];
      for(ll i=1;i<=n;i++){
          cin>>a[i];
        }
       ll b[n+1];
       for(ll i=1;i<=n;i++){
           cin>>b[i];
       }
       sort(a+1,a+n+1);
       sort(b+1,b+n+1);
       ll ans=0;
       ll idx=0;
        for(ll i=1;i<=n;i++){
           if(k>0 && a[i]<b[n-i+1])
           {
               ans+=b[n-i+1];
                   k--;
            }else {
                   idx=i;
                   break;
                
            }
        }
        for(ll i=idx;i<=n;i++){
               ans+=a[i];
            }
           cout<<ans<<endl;
    }
       return 0;
          
}