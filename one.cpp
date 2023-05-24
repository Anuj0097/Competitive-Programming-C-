#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=5;
    int *j;
    int **k;
    j=&i;
    k=&j;
    cout<<k<<*k<<**k;
    return 0;
}