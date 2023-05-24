#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k,i=1;
        cin>>k;
        vector<int> w;
        while(w.size()<=k){
            if(i%3!=0 && i%10!=3){
                w.push_back(i);
                
            }
         i++;
        }
        cout<<w[k-1]<<endl;
    }
    return 0;
}