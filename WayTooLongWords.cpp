#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string c;
        int len;
        cin>>c;
        len=c.size();
        if(len>10){
            cout<<c[0]<<len-2<<c[len-1]<<endl;
        }else{
            cout<<c<<endl;
        }
    }
}
