#include<iostream>
using namespace std;

void sumN(int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=(i+1);

    }
    cout << sum << endl;
}

int main(){
    int n;
    cin >> n;
    sumN(n);
}