#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,complet=0;
    cin>>n;
    int A[n],L[n];
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    for(i=0;i<n;i++){
        ++L[A[i]];
        if(L[1] && L[2] && L[3] && L[4] && L[5]){
            ++complet;
            L[1]=L[2]=L[3]=L[4]=L[5]=0;
        }
    }
    cout<<complet<<endl;
}
