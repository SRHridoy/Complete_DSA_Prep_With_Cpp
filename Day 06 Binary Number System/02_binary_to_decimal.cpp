#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

void decimalToBin(int binNum){
    int rem = 0,pow = 1,decNum=0;
    while (binNum>0)
    {
        rem = binNum%10;
        binNum/=10;
        decNum+=rem*pow;
        pow*=2;
    }
    cout << decNum << endl;
    
}

int main(){
    optimize();

    int binNum;
    cin >> binNum;
    decimalToBin(binNum);
}
