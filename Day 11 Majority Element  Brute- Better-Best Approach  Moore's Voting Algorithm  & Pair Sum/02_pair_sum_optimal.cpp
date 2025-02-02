#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

vector<int> pairSum(vector<int>nums, int target){
    vector<int>ans;
    int start = 0, end = nums.size()-1;
    while (start<end)
    {
        if(nums[start]+nums[end] > target)
            end--;
        else if(nums[start]+nums[end] < target)
            start++;
        else{
            ans.push_back(start);
            ans.push_back(end);
            break;
        }
    }
    return ans;
}

int main(){
    optimize();

    vector<int>nums = {2,7,11,15};
    int target = 9;
    

    vector<int>ans = pairSum(nums,target);
    cout << ans[0] << " " << ans[1] << endl;
}
