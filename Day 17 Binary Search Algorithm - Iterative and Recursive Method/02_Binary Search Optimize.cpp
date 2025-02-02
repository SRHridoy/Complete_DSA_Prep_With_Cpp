#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>&v, int &target){
    int start = 0, end = v.size()-1;
    
    while (start<=end)
    {
        int mid = start+(end-start)/2;

        if(v[mid]<target) start = mid+1;
        else if(v[mid]>target) end = mid-1;
        else return mid;
    }
    return -1;
}

int main(){

    vector<int> v1 = {-1, 0, 3, 4, 5, 9, 12};
    int tar1 = 12;
    cout << tar1 << " is found at " << binarySearch(v1,tar1) << endl;

    vector<int> v2 = {-1, 0, 3, 5, 9, 12};
    int tar2 = 0;
    cout << tar2 << " is found at " << binarySearch(v2,tar2) << endl;

}