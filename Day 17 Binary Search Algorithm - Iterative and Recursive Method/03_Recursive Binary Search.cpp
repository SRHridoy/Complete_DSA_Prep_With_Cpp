#include<bits/stdc++.h>
using namespace std;

int recBinarySearch(vector<int>&v, int &target, int start, int end){
    
    if (start<=end)
    {
        int mid = start + (end - start)/2;

        if(v[mid]<target) return recBinarySearch(v,target,mid+1,end);
        else if(v[mid]>target) return recBinarySearch(v,target,start,mid-1);
        else return mid;
    }
    return -1;
}

int main(){

    vector<int> v1 = {-1, 0, 3, 4, 5, 9, 12};
    int tar1 = 12;
    cout << tar1 << " is found at " << recBinarySearch(v1,tar1,0,v1.size()-1) << endl;

    vector<int> v2 = {-1, 0, 3, 5, 9, 12};
    int tar2 = 0;
    cout << tar2 << " is found at " << recBinarySearch(v2,tar2,0,v2.size()-1) << endl;

}