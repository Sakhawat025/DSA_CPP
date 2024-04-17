#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    int iCount=0;
    int len=s.size();
    for(int i=0;i<len;i++){
        if(s[i]=="hello"[iCount]){
            iCount++;
        }
        if(iCount==5){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<< "NO"<<endl;

    return 0;
}
