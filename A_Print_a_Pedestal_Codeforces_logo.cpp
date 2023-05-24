#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int sum=0;
        int cnt=0;
        for(int i=01;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            a[i]*=-1;
            sum+=a[i];
            cnt++;

        }
        if(cnt==0)
        {
            cout<<1<<end    
        }
    }
}