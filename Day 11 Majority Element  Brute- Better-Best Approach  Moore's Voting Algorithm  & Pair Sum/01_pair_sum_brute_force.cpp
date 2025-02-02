#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

vector<int> pairSum(vector<int>nums, int target){
    int n = nums.size();
    vector<int>ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
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
