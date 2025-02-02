#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

int maxSubArraySum(int arr[], int n){
    int maxSum = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        int currSum = 0;
        for (int end = start; end < n; end++)
        {
            currSum+=arr[end];
            maxSum = max(maxSum,currSum);
        }
        
    }
    return maxSum;
    
}

int main(){
    optimize();

    int n = 5;
    int arr[5] = {1,2,3,4,5};

    cout << "Maximum Sum of Sub Array : " << maxSubArraySum(arr,n);
}
