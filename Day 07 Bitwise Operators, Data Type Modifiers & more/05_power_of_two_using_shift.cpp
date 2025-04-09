#include<bits/stdc++.h>
using namespace std;

void checkPowerOfTwo(int n) {
    if (n <= 0) {
        cout << "NO" << endl;
        return;
    }
    
    // If n is power of 2, n & (n-1) will be 0
    if ((n & (n-1)) == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

  }

int main() {
    int n;
    cin >> n;
    checkPowerOfTwo(n);
}