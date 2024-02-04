#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,Key=77;
    cout << "Enter Number of Array: ";
    cin >> n;
    int A[n];
    cout << "Scan the Array: ";
    for(i=0;i<n;++i){
        cin>> A[i];
    }
    cout << "Print the Array: ";
    for(i=0;i<n;++i){
        cout<< A[i]<< " ";
    }
    cout<<endl;
    int LowIndex=1,HighIndex=n
    ,Found=-1,Mid;
    while(LowIndex<=HighIndex){
        Mid=(LowIndex+HighIndex)/2;
        if(Key==A[Mid]){
           Found=Mid;
           break;
        }
        if(Key<A[Mid]){
            HighIndex=Mid-1;
        }
        else if(Key>A[Mid]){
            LowIndex=Mid+1;
        }
    }
    if(Found!=-1){
            cout<< "The Target Element Index "<< Found<<endl;
    } else {
            cout<< "The Target Element Index "<<Mid<<endl;
    }
    return 0;
}
