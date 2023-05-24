#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll c=abs(b-a);
        ll d=c/10;
        ll e=c%10;
        if(e)
        d++;
        cout<<d<<endl; 
    }
    return  0;

}