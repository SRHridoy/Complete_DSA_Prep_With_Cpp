#include<iostream>
using namespace std;

void checkPrime(int n){
    bool isPrime = true;
    for (int i = 2; i*i <= n; i++)
    {
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime)cout << n << " is a prime number..." << endl;
    else cout << n << " is not a prime number ..." << endl;

    
}

int main(){
    int n;
    cin >> n;
    
    checkPrime(n);
}