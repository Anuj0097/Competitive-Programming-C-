#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int maxv=0;
    int minv=1000;
    int maxindex=0;
    int minindex=0;
    for(int i=0;i<n;i++) {
     int x;
     cin>>x;
     if(x>maxv){
         maxindex=i;
         maxv=x;
     }
     if(x<=minv)
     {
         minindex=i;
         minv=x;
     }
    }
    if(maxindex>minindex){
        cout<<(maxindex-1)+(n-minindex)-1;
    }
    else {
        cout<<(maxindex-1)+(n-minindex);
    }
    return 0;
}