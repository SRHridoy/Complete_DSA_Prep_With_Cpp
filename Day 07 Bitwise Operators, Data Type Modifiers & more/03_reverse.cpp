#include<iostream>
using namespace std;

int reverse(int n){
    int revNum = 0;
    while (n>0)
    {
        int digit = n%10;
        n/=10;
        revNum*=10;
        revNum+=digit;
    }
    return revNum;
}

int main(){
    int n;
    cin >> n;
    cout << reverse(n);
}