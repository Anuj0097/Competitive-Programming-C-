#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int e;
        unordered_map<int,int> map;
        for(int i=0;i<4;i++)
        {
            cin>>e;
            map[e]++;
        }
        if(map.size()==4||map.size()==3) cout<<"2"<<endl;
        else if(map.size()==1) cout<<"0"<<endl;
        else 
        {
            for(auto e:map){
                if(e.second%2==0) cout<<"2"<<endl;
                else cout<<"1"<<endl;
                break;
            }
        }
    }
    return 0;
}