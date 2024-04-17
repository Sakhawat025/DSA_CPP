#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s=0;
    cin>>n;
    while(n>5){
        n-=5;
        s++;
    }
    if(n>0){
        s++;
    }
    cout<<s<<endl;

}
