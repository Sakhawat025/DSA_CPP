#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Key=77,Found=-1,n,i;
    int A[]={11,18,20,55,77,50,25,88};
    n=sizeof(A)/sizeof(A[0]);
    for(i=0;i<n;++i){
        if(A[i]==Key){
            Found=i;
            break;
        }
    }
    if(Found!=-1){
        cout<< "The Key value Index "<<Found<<endl;
    } else {
        cout<< "The Key is not Found"<<endl;
    }
    return 0;
}
