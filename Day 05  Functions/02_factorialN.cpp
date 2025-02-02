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

int main(){
    int n;
    cin >> n;
    cout << factorial(n);
}