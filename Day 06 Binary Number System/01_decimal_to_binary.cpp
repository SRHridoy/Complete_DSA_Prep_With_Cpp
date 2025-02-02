#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

void decimalToBinary(int decimalNum){
    int rem,pow = 1,binNum = 0;
    while (decimalNum>0)
    {
        rem = decimalNum%2;
        decimalNum/=2;
        binNum = binNum+pow*rem;
        pow*=10;
    }
    cout << binNum << endl;
}

int main(){
    optimize();

    for (int i = 1; i <= 10; i++)
    {
        decimalToBinary(i);
    }
    
}
