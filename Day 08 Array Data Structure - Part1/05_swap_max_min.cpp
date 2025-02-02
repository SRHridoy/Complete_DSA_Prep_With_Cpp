#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

void swapMaxMin(int arr[], int size){
    int maxi = INT_MIN;
    int mini = INT_MAX;
    int minIndex = 0,maxIndex = 0;
    for (int i = 0; i < size; i++)
    {
        if(maxi<arr[i]){
            maxi = arr[i];
            maxIndex = i;
        }
        if(mini>arr[i]){
            mini = arr[i];
            minIndex = i;
        }
    }

    swap(arr[maxIndex],arr[minIndex]);
    
}

int main(){
    optimize();

    int arr[] = {3,2,1,477,0};
    swapMaxMin(arr,5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    
}
