#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

int main(){
    optimize();

    int n;
    cin >> n;

    bool isPrime = true;
    for (int i = 2; i*i <= n; i++)
    {
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime)cout << n << " is a prime number!" << endl;
    else cout << n << " is not a prime number!" << endl;
    
}
