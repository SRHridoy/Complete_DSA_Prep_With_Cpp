#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

void intersection(int arr1[],int size1,int arr2[], int size2){
    int maxSz = max(size1,size2);
    bool is1Szbig = false;
    if(maxSz==size1) is1Szbig = true;
    if(is1Szbig){
        for (int i = 0; i < size1; i++)
        {
            for (int j = 0; j < size2; j++)
            {
                if(arr1[i]==arr2[j]){
                    cout << arr1[i] << " ";
                    break;
                }
            }
            
        }
        
    }else{
        for (int i = 0; i < size2; i++)
        {
            for (int j = 0; j < size1; j++)
            {
                if(arr2[i]==arr1[j]){
                    cout << arr2[i] << " ";
                    break;
                }
            }
            
        }
    }
    
}

int main(){
    optimize();

    int arr1[] = {1,2,3,4,5};
    int arr2[] = {6,7,3,1};
    intersection(arr1,5,arr2,4);
}
