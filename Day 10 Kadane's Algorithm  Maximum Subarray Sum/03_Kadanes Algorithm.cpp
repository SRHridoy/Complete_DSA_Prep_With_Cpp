#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

int kadanesAlgo(int arr[], int n){
    int maxSum = INT_MIN, currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum+=arr[i];
        maxSum = max(maxSum,currSum);
        if(currSum<0)currSum = 0;
    }
    return maxSum;
    
}

int main(){
    optimize();

    int n = 5;
    int arr[n] = {1,2,3,4,5};
    cout << "Max Subarry Sum = " << kadanesAlgo(arr,n);
}
