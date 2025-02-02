#include<iostream>
using namespace std;

int sumOfDigits(int n){
    int digitSum = 0;
    while (n>0)
    {
        digitSum+=n%10;
        n/=10;
    }
    return digitSum;
}

int main(){
    int num;
    cin >> num;
    cout << sumOfDigits(num);
}