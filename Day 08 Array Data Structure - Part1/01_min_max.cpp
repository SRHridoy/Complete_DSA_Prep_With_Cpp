#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

int mini(int arr[], int size){
    int minAns = INT_MAX;
    // max same...
    for (int i = 0; i < size; i++)
    {
        minAns = min(minAns,arr[i]);
    }
    return minAns;
}

int main(){
    optimize();

    int arr[] = {1,3,4,1,-30};
    int ansMin = mini(arr,(sizeof(arr)/sizeof(arr[0])));
    cout << ansMin << endl;
}
