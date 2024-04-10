#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        int m= min(n * a, (n / 2) * b + (n % 2) * a);
        cout << m<< endl;
    }

    return 0;
}
