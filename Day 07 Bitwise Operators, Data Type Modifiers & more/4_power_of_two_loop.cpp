#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

void checkPowerOfTwo(int n){
    if(n==0){
        cout << "No" << endl;
        return;
    }
    while (n!=1)
    {
        if(n%2!=0){
            cout << "No" << endl;
            return;
        }
            
        n/=2;
    }
    cout << "Yes" << endl;
    
    
}

int main(){
    optimize();

    int n;
    cin >> n;
    checkPowerOfTwo(n);
}
