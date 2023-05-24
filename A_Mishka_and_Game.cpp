#include<bits/stdc++.h>
using namespace std;
 int a,n,m,mis,cri;
int main(){
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>n>>m;
        if(n>m){
            mis++;
        }
        else if(m>n){
            cri++;
        }
    }
    if(mis>cri){
        cout<<"Mishka";
    }
    else if(cri>mis){
        cout<<"Chris";
    }
    else if(cri==mis){
        cout<<"Friendship is magic!^^";
    }
    return 0;
}