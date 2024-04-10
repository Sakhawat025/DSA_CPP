#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,i,walk=0,a,b;
    cin>>n>>m;
    int t[n];
    for(i=0;i<n;i++){
        cin>>t[i];
    }
    for(i=0;i<m;i++){
        cin>>a>>b;
        int j=a-1;
        while(j<b){
            walk+=t[j];
            j++;
        }
    }
    cout<<walk<<endl;
}
