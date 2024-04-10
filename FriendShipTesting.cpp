#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,maxPerson=0,currentDay=0;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        for(int i=0;i<n;i++){
            if(A[i]>maxPerson){
                ++maxPerson;
                ++currentDay;
            }
        }
        cout<<maxPerson<<endl;
    }
}
