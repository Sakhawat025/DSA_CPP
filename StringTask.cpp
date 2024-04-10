#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s1;
    cin>>s;
    int len=s.size();
    for(int i=0;i<len;i++){
        if(s[i]=='a' || s[i]=='o' || s[i]=='y' || s[i]=='e' || s[i]=='u' || s[i]=='i' || s[i]=='A' || s[i]=='O' || s[i]=='Y' || s[i]=='E' || s[i]=='U' || s[i]=='I'){
            continue;
        }else{
            s1+=".";
            s1+=towlower(s[i]);
        }
    }
    cout<<s1<<endl;

}
