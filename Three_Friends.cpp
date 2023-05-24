#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b==c || a+c==b || c+b==a)
        {
            cout<<"yes"<<endl;
        }
        else cout<<"no"<<endl;
    }
    return 0;

}