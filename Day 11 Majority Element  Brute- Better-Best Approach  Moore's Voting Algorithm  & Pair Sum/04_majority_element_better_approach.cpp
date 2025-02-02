#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

int majorityElement(vector<int> nums){
    int n = nums.size();
    sort(nums.begin(),nums.end());

    int freq = 1, ans = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if(nums[i]==nums[i-1])
            freq++;
        else{
            freq = 1;
            ans = nums[i];
        }

        if(freq>n/2)
            return ans;
    }
    
}

int main(){
    optimize();

    vector<int>nums = {1,1,2,2,3,1,1,1};
    
    cout << "Majority Element is : " << majorityElement(nums);
}
