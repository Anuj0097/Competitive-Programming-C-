#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int max,min,def;
    if(a>=b && a>=c ){
        max=a;
        if(b>=c){
            def=b;
            min=c;
        }
        else{
            def=c;
            min=b;
        }
    }
    else if(b>=a && b>=c){
            max=b;
            if(a>=c){
                def=b;
                min=c;
            }
            else {
                def=c;
                min=b;
            }
    }
            else {
                

            }
        }
    }
    return 0;
}