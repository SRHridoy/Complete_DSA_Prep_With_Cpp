#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for (int i = 0; i < n; i++)
    {
        fact*=(i+1);
    }
    return fact;
}

int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);
    
    return fact_n/(fact_r*fact_nmr);
}

int main(){
    int n,r;
    cin >> n >> r;

    cout << nCr(n,r);
}