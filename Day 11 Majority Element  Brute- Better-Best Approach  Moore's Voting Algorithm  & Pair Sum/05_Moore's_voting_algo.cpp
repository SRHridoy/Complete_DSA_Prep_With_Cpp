#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

int majorityElement(vector<int>nums){
    int freq = 0, ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;
}

int main(){
    optimize();

    vector<int>nums = {1,1,2,2,3,1,1,1};
    
    cout << "Majority Element is : " << majorityElement(nums);
}
