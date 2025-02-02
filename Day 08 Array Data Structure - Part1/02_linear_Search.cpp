#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

int linearSearch(int arr[], int size, int target){
    for (int i = 0; i < size; i++)
    {   
        if(arr[i]==target)return i;
    }
    return -1;
    
}

int main(){
    optimize();

    int arr[] = {1,3,4,1,5,77,8};
    int target = 77;
    cout << linearSearch(arr,(sizeof(arr)/sizeof(arr[0])),target);

}
