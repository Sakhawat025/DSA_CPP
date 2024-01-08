#include<bits/stdc++.h>
using namespace std;

/*void say_hello(int n)
{
    if(n==0){
        return;
    }
    say_hello(n-1);
    cout << "Hello " << n << endl;
}*/

void say_hello(int n)
{
    if(n==0){
        return;
    }
    cout << "Hello " << n <<"\n";
    say_hello(n-1);
}

int main()
{
    say_hello(10);
}
