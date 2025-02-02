#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

void reverse(int arr[], int size){
    int start = 0, end = size-1;
    while (start<end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
}

int main(){
    optimize();

    int arr[] = {4,2,7,8,1,2,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
}
