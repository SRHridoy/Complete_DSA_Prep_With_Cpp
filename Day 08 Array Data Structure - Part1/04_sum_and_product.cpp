#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

void sumAndProduct(int arr[], int size){
    int sum = 0,mul = 1;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
        mul*=arr[i];
    }
    cout << sum << "\t" << mul << endl;
    
}

int main(){
    optimize();

    int arr[] = {3,4,2,2,1};
    sumAndProduct(arr,5);
}
