#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    vector<int>ans;
    vector<int>leftProd(nums.size(),1);
    vector<int>rightProd(nums.size(),1);


    //Prefix Product :
    for (int i = 1; i < nums.size(); i++)
    {
        leftProd[i] = leftProd[i-1]*nums[i-1];
    }

    //Suffix Product:
    for(int i = nums.size()-2; i >= 0; i--){
        rightProd[i] = rightProd[i+1]*nums[i+1];
    }

    for (int i = 0; i < nums.size(); i++)
    {
        ans.push_back(leftProd[i]*rightProd[i]);
    }
    return ans; 
}

int main()
{

    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans = productExceptSelf(nums);

    for (auto val : ans)
        cout << val << " ";
}