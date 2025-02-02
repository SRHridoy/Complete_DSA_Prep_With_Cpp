#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

void subArrayGenerate(int arr[], int n){
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout << arr[i];
            }cout << " ";
            
        }cout << endl;
        
    }
    
}

int main(){
    optimize();

    int n = 5;
    int arr[5] = {1,2,3,4,5};

    subArrayGenerate(arr,n);
}
